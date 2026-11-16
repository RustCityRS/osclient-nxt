// projects/osclient/minimenu/MinimenuOps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "MinimenuOps.h"

namespace jag::oldscape::minimenu {
    // 0x100d3d3b4
    int32_t MinimenuOps::NULL_OP = 0;

    // 0x100073990
    long MinimenuOps::GetOp(int arg1) const {
        obj_iterator local_38;
        eastl local_28;

        local_28._0_16_ = find((unsigned int)arg1);
        &local_38 = (obj_iterator[16])end();
        if (local_28 != local_38 == '\0') {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "minimenu/MinimenuOps.cpp",
                            80, "Invalid MinimenuOp requested: %d", (unsigned long)(unsigned int)arg1);
        }
        return local_28.HeapBeginPtr() + 4;
    }

    // 0x100073db0
    MinimenuOps::MinimenuOps() {
        int local_20[2];

        new (local_20) eastl::allocator("EASTL hash_map");
        new (this) eastl::hash_map<int, MinimenuOp>(*local_20);
        local_20[0] = 1;
        uint16_t* puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 133;
        local_20[0] = 2;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 7;
        local_20[0] = 3;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 4;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 5;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 6;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 7;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 133;
        local_20[0] = 8;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 7;
        local_20[0] = 9;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 10;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 11;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 12;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 13;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 14;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 197;
        local_20[0] = 15;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 71;
        local_20[0] = 16;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 133;
        local_20[0] = 17;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 7;
        local_20[0] = 18;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 19;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 20;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 21;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 22;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 23;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 16;
        local_20[0] = 24;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 25;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 10;
        local_20[0] = 26;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 28;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 29;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 30;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 44;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 45;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 46;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 47;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 48;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 49;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 50;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 51;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 69;
        local_20[0] = 57;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 58;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 10;
        local_20[0] = 1001;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 5;
        local_20[0] = 1002;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 517;
        local_20[0] = 1003;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 517;
        local_20[0] = 1004;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 517;
        local_20[0] = 1006;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 256;
        local_20[0] = 1007;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1008;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1009;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1010;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1011;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1012;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 8;
        local_20[0] = 1850;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 36;
        local_20[0] = 1851;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 36;
        local_20[0] = 1852;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 36;
        local_20[0] = 1853;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 100;
        local_20[0] = 1854;
        puVar1 = (uint16_t*)(*this)[*local_20];
        *puVar1 = 32;
    }

} // namespace jag::oldscape::minimenu
