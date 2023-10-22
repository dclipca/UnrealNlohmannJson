# UnrealNlohmannJson
Unreal Engine wrapper for NlohmannJson, JSON for Modern C++

## Usage
```cpp
#include "ThirdParty/UnrealNlohmannJsonLibrary/json.hpp"

// Using (raw) string literals and json::parse
nlohmann::json NlohmannJson = nlohmann::json::parse(R"(
  {
    "pi": 3.141,
    "happy": true
  }
)");
std::string StdJsonString = NlohmannJson.dump();
FString JsonString(StdJsonString.c_str());
UE_LOG(LogTemp, Warning, TEXT("%s"), *JsonString); // {"happy":true,"pi":3.141}
```
## Installation
1. Download [Source code (zip)](https://github.com/dclipca/UnrealNlohmannJson/archive/refs/tags/3.11.2.1.zip).
2. Drag the folder inside the zip, for example `UnrealNlohmannJson-3.11.2.1`, to the `Plugins` folder of your Unreal Engine project
3. ???
4. Profit!
