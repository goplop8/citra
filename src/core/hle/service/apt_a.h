// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace APT_A

namespace APT_A {

class Interface : public Service::Interface {
public:
    Interface();

    std::string GetPortName() const override {
        return "APT:A";
    }
};

} // namespace
