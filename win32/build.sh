#!/bin/bash

export NO_LUA=1
nmake -f scite.mak && cp ../bin/TrabantIDE.exe ../../../pd/bin/ && echo 'pd/bin/ copied.' &&
	cp ../bin/TrabantIDE.exe ../../../pd/TrabantIDE/ && echo 'pd/TrabantIDE/ copied.'
