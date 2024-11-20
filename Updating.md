# Updating Guide
[Simple Video Guide](https://youtu.be/kCqW_dBe5qo)

## Tools
[IL2CPP Dumper](https://github.com/Perfare/Il2CppDumper/releases/download/v6.7.40/Il2CppDumper-net7-win-v6.7.40.zip)<br>
[dnSpy](https://github.com/dnSpy/dnSpy/releases/download/v6.1.8/dnSpy-net-win64.zip)

## IL2CPP Dumping
Select `GameAssembly.dll`: 
```
Rust/GameAssembly.dll
```
<p align="Left">
  <img src="https://github.com/IntelSDM/RustDmaCheat/assets/86087830/570c31b6-988a-4d8e-8f45-f258297d95d7"
    style="width: 75%;" />
</p>

Select `global-metadata.dat`

```
Rust\RustClient_Data\il2cpp_data\Metadata\global-metadata.dat
```

<p align="Left">
  <img src="https://github.com/IntelSDM/RustDmaCheat/assets/86087830/ae59da4a-4b93-4dd6-86d0-cf57bb3663a9"
    style="width: 75%;" />
</p>



## Updating Class Address
Search OcclusionCulling within the DNSpy modules:
<p align="Left">
  <img src="https://github.com/user-attachments/assets/1488845d-bf33-4b3e-af8e-bf6642cc9dbd"
    style="width: 75%;" />
</p>

Copy the class name after the % so in this example: d442c5cae6a89c0c967516c999e495f284ac087e
<p align="Left">
  <img src="https://github.com/user-attachments/assets/e611ebd5-b6c1-4a31-a354-71cc60da68b6"
    style="width: 75%;" />
</p>

Open script.json in your il2cpp dumper folder and search for that class name you copied + _c* on the end so in this example: d442c5cae6a89c0c967516c999e495f284ac087e_c*
<p align="Left">
  <img src="https://github.com/user-attachments/assets/5ac8158e-0261-461e-b7da-1a11bc36dcca"
    style="width: 75%;" />
</p>
Copy the address into the oclussioncullingclass field
<p align="Left">
  <img src="https://github.com/user-attachments/assets/07bf09a7-fc16-48c9-8299-059e5a63f8d4"
    style="width: 75%;" />
</p>

## Updating instance
Search within the OcclusionCulling class for : "public static OcclusionCulling "(WITH THE SPACE AT THE END)
<p align="Left">
  <img src="https://github.com/user-attachments/assets/97881224-92b9-4c2d-aa96-4284a901c113"
    style="width: 75%;" />
</p>
There will be multiple, search for them 1 by one. Then compare them in reclass.
<br>
To find the address to scan in reclass, it is the one printed after "StaticClass: "
<p align="Left">
  <img src="https://github.com/user-attachments/assets/7a2185bb-d6fc-42fe-8ab0-22b338bd92f7"
    style="width: 75%;" />
</p>
Compare each one you find in DNSpy to Reclass, if it isn't 0x0 then its the one you want.
<p align="Left">
  <img src="https://github.com/user-attachments/assets/b53c3d30-88cf-416d-9fcb-d6c6803837f2"
    style="width: 85%;" />
</p>
Then once you find the correct offset that isn't pointing to 0x0 then paste it in "instance".
<p align="Left">
  <img src="https://github.com/user-attachments/assets/f67d2cb8-019c-4c26-a346-5ce0b7da2708"
    style="width: 75%;" />
</p>

## Updating debugsettings
In DNSpy within the occlusionculling class search for OcclusionCulling.DebugSettings
<p align="Left">
  <img src="https://github.com/user-attachments/assets/3658d4f7-6e20-487c-b557-40d6c51f32ff"
    style="width: 75%;" />
</p>
Copy the offset into the "debugsettings" in the cheat

<p align="Left">
  <img src="https://github.com/user-attachments/assets/9e3a5791-5726-4c4a-8462-3f39adfdd15e"
    style="width: 75%;" />
</p>
