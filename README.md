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
FString JsonString(StdJsonString.c_str()); // {"happy":true,"pi":3.141}
UE_LOG(LogTemp, Warning, TEXT("%s"), *JsonString);
```
