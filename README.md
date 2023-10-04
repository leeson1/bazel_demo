# Setting

vscode setting

`.vscode/c_cpp_properties.json`

```
{
    "configurations": [
        {
            "name": "Linux",
            "includePath": [
                "${workspaceFolder}/**",
            ],
            "defines": [],
            "compilerPath": "/usr/local/bin/g++",
            "cStandard": "c17",
            "cppStandard": "c++20",
            "intelliSenseMode": "linux-gcc-x64",
            "compileCommands": "${workspaceFolder}/bazel-bin/src/compile_commands.json"
        }
    ],
    "version": 4
}
```

# Building

Generate compile_commands.json
```
bazel build src:example_compdb
```

build project 
```
bazel build src:demo
```
