// projects/osclient/minimenu/MinimenuOps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "MinimenuOps.h"

namespace jag::oldscape::minimenu {
    // 0x100d3d3b4, 4 bytes, __const
    MinimenuOps::NULL_OP = 0;

    // 0x10006d0e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MinimenuOps::MinimenuOps(): jumps straight to the base-object constructor

    // 0x100073990, 128 bytes, placed by class name
    // MinimenuOps::GetOp(int) const
    long MinimenuOps::GetOp(int param_1) {
        hashtable_iterator_base local_38[16];
        eastl local_28[20];
        uint local_14;

        local_14 = param_1;
        local_28._0_16_ = find((int*)&local_14);
        local_38 = (hashtable_iterator_base[16])end();
        if (eastl::operator!=(local_28, local_38, local_38._8_8_)) {
            return local_28->HeapBeginPtr() + 4;
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/minimenu/"
                        "MinimenuOps.cpp",
                        80, "Invalid MinimenuOp requested: %d", (ulong)local_14);
    }

    // 0x100073db0, 1504 bytes, base-object constructor, placed by class name
    // MinimenuOps::MinimenuOps()
    void MinimenuOps::MinimenuOps() {
        undefined2* puVar1;
        int local_20[2];

        new (local_20) eastl::allocator("EASTL hash_map");
        new (this)
            eastl::hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>(local_20);
        local_20[0] = 1;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 133;
        local_20[0] = 2;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 7;
        local_20[0] = 3;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 4;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 5;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 6;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 7;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 133;
        local_20[0] = 8;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 7;
        local_20[0] = 9;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 10;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 11;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 12;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 13;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 14;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 197;
        local_20[0] = 15;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 71;
        local_20[0] = 16;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 133;
        local_20[0] = 17;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 7;
        local_20[0] = 18;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 19;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 20;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 21;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 22;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 23;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 16;
        local_20[0] = 24;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 25;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 10;
        local_20[0] = 26;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 28;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 29;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 30;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 44;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 45;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 46;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 47;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 48;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 49;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 50;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 51;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 69;
        local_20[0] = 57;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 58;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 10;
        local_20[0] = 1001;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 5;
        local_20[0] = 1002;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 517;
        local_20[0] = 1003;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 517;
        local_20[0] = 1004;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 517;
        local_20[0] = 1006;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 256;
        local_20[0] = 1007;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1008;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1009;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1010;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1011;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1012;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 8;
        local_20[0] = 1850;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 36;
        local_20[0] = 1851;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 36;
        local_20[0] = 1852;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 36;
        local_20[0] = 1853;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 100;
        local_20[0] = 1854;
        puVar1 = (undefined2*)eastl::
            hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>::operator[](
                (hash_map<int, MinimenuOp, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>*)this,
                local_20);
        *puVar1 = 32;
    }

} // namespace jag::oldscape::minimenu
