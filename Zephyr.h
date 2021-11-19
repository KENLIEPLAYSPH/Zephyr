#pragma once
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "shlwapi.lib")
#include <stdint.h>
#include <stdio.h>
#include <string>
#include <map>
#include "color.h"
namespace zep {
	void console();
}

void zep::console {
  SendConsole("HTTP service started", "HTTP");
}