#pragma once

#include "RE/Skyrim.h"
#include "REL/Relocation.h"
#include "SKSE/SKSE.h"

#include <spdlog/sinks/basic_file_sink.h>

#ifndef NDEBUG
#include <spdlog/sinks/msvc_sink.h>
#endif

// Experimental physics hooks (swim-state fix). Offsets are unverified on 1.7.x, so they are disabled.
#define AMR_PHYSICS_HOOKS 0

#define DLLEXPORT __declspec(dllexport)

using namespace std::literals;
using namespace REL::literals;
