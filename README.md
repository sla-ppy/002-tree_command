## tree_command:
### Reproduce a very simple tree program that walks the current directory tree.
### Use std::filesystem.
____
Example output:
```
C:\src\Volty> tree.exe
src
├── Core
│   ├── Application.cpp
│   ├── GameWindow.cpp
│   ├── HID.cpp
│   ├── Math.cpp
│   └── World.cpp
└── Utils
    ├── ArgsParser.cpp
    ├── CsvLogger.cpp
    ├── LazyFile.cpp
    ├── ResourceManager.cpp
    └── stl_ext.cpp

2 directories, 10 files
```
____
Simplified to:
```
src
|--- Core
     |--- Application.cpp
     |--- GameWindow.cpp
|--- Utils
     |--- LazyFile.cpp
```
