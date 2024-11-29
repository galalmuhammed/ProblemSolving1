Formatting and Compilation Setup
This project uses specific formatting and build configurations to ensure consistent code style and an efficient development workflow.

Code Formatting
I used a .clang-format configuration file to automatically format the code with the following rules:

BasedOnStyle: Google
IndentWidth: 4
ColumnLimit: 180
SpaceBeforeParens: ControlStatements
This ensures a clean and readable codebase aligned with the Google style guide, with some customizations.

Compilation Configuration
To compile the C++ code, I utilized a tasks.json file with a MinGW configuration. The build system is set up for Visual Studio Code
and uses the following task:

{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "C/C++: g++.exe build active file",
			"command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "compiler: C:\\msys64\\ucrt64\\bin\\g++.exe"
		}
	]
}

How It Works
Formatting:
Use .clang-format to apply the specified rules. This helps maintain consistency across the codebase.

Building the Code:

The task labeled "C/C++: g++.exe build active file" is configured to compile the currently active file using the MinGW g++ compiler.
The output executable is generated in the same directory as the source file, with the same name but an .exe extension.
The arguments ensure colored diagnostics and debugging information during compilation.
Prerequisites
Clang-Format: Ensure you have clang-format installed for automatic code formatting.
MinGW: Install MinGW and configure the path to the g++.exe compiler as shown in the command field.
