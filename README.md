# SDK-RadicalHeights

This SDK is for [Radical Heights](http://store.steampowered.com/app/809960/Radical_Heights/) **version ALPHA-1-201356**.  
Dump was created using [KN4CK3R's SDK generator](https://github.com/KN4CK3R/UnrealEngineSDKGenerator).

## Offsets

**If you use offsets instead of patterns, keep in mind that they may break between updates.**

| What         | Offset         |
|--------------|----------------|
| GNames       | 0x03C18058     |
| GObjects     | 0x03C20910     |

## Patterns

### GNames

#### IDA Format
```
48 8B 35 ?? ?? ?? ?? 41 0F B7 C4 4D 8D A5 ?? ?? ?? ?? 49
```

#### CPP Format
```cpp
auto address = FindPattern(GetModuleHandleW(L"RadicalHeights.exe"), reinterpret_cast<const unsigned char*>("\x48\x8B\x35\x00\x00\x00\x00\x41\x0F\xB7\xC4\x4D\x8D\xA5\x00\x00\x00\x00\x49"), "xxx????xxxxxxx????x");
```

### GObjects

#### IDA Format
```
48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 89 43 04 48 83 C4 20 5B C3
```

#### CPP Format
```cpp
auto address = FindPattern(GetModuleHandleW(L"RadicalHeights.exe"), reinterpret_cast<const unsigned char*>("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x89\x43\x04\x48\x83\xC4\x20\x5B\xC3"), "xxx????x????xxxxxxxxx");
```

<sub>Disclaimer</sub>  
<sub><sub>For educational purposes only.</sub></sub>