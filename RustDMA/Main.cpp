#include "pch.h"
#include "memory.h"
#include "CheatFunction.h"
#include <dwmapi.h>
#include <iostream>
enum class DebugFilter
{
	Off = 0,
	Dynamic = 1,
	Static = 2,
	Grid = 4,
	All = 7
};

void main()
{
	if (!TargetProcess.Init("RustClient.exe"))
	{
		printf("Failed to initialize process\n");
		return;
	}
	uint64_t gameassembly_base = TargetProcess.GetBaseAddress("GameAssembly.dll");
	TargetProcess.FixCr3();

	uint64_t occlusioncullingclass = 233574112;
	uint64_t klass = TargetProcess.Read<uint64_t>(gameassembly_base + occlusioncullingclass);
	uint64_t staticclass = TargetProcess.Read<uint64_t>(klass + 0xb8);
	printf("StaticClass: %llx\n", staticclass);

	uint64_t instance = TargetProcess.Read<uint64_t>(staticclass + 0x338);
	uint64_t debugsettings = TargetProcess.Read<uint64_t>(instance + 0x1A8);


	TargetProcess.Write<DebugFilter>(debugsettings + 0x1c, DebugFilter::Dynamic);
	TargetProcess.Write<int>(debugsettings + 0x20, 131072);

	printf("Admin ESP written");
	std::cin.get();
	return;
}
