Debugging ist ganz einfach ! 
Das pybind modulde bauen (debug) mit CMake (easy).
Breakpoints nicht vergessen! müsste aber auch nachtrglich gehen ...
Essenztiell: Die launch.json. 
```
    {
      "type": "lldb",
      "request": "launch",
      "name": "Debug",
      "program": "/Users/sash/anaconda3/envs/PY3/bin/python",
      "args": ["/Users/sash/c_coding/pybind11_debug/debug_in_ipython.py"],
      "cwd": "${workspaceFolder}/build/"
    },
```
damit klappt es auf jeden fall !
Dann im Debug Reiter in VSC oben im dropdown das richtige auswählen -> "Debug" und starten.