# Chess

## Setup

Create a python 3.12 virtual environment (recommended with `uv`):

```
uv venv --python=3.12
```

Install python packages:

```
uv pip install -r requirements.txt
```

## Build

List CMake presets with:

```
cmake --list-presets
```

Generate the (development) build:

```
cmake --preset development
```

Build:

```
cmake --build build
```

