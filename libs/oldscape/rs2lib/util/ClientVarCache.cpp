// libs/oldscape/rs2lib/util/ClientVarCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape {
    class ClientVarCache {
    public:
        uint GetVarbit(int);
        void SetVarbit(int, int);
        static Array<int, eastl::allocator> /* 24 bytes */ m_varServ; // = Array<int,eastl::allocator>(4000)
        static Array<int, eastl::allocator> /* 24 bytes */ m_var;     // = Array<int,eastl::allocator>(4000)
    };

    // 0x100fc9210, 24 bytes, __common; set at startup by ___cxx_global_var_init
    Array<int, eastl::allocator> ClientVarCache::m_varServ = Array<int, eastl::allocator>(4000);

    // 0x100fc9228, 24 bytes, __common; set at startup by ___cxx_global_var_init.12
    Array<int, eastl::allocator> ClientVarCache::m_var = Array<int, eastl::allocator>(4000);

    // 0x1001fb8f0, 160 bytes, placed by class name and debug map
    // ClientVarCache::GetVarbit(int)
    uint ClientVarCache::GetVarbit(int param_1) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int* piVar4;
        long lVar5;
        uint* puVar6;
        VarBitType local_38;

        local_38.List(param_1);
        piVar4 =
            (int*)shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_38);
        iVar1 = *piVar4;
        lVar5 = shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_38);
        iVar2 = *(int*)(lVar5 + 4);
        lVar5 = shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_38);
        puVar6 = (uint*)std::array<int, 32ul>::operator[]((long)*(int*)(lVar5 + 8) - (long)iVar2);
        uVar3 = *puVar6;
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_var, (long)iVar1);
        iVar1 = *piVar4;
        local_38.~shared_ptr();
        return iVar1 >> ((byte)iVar2 & 31) & uVar3;
    }

    // 0x1001fb9f0, 224 bytes, placed by class name and debug map
    // ClientVarCache::SetVarbit(int, int)
    void ClientVarCache::SetVarbit(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int* piVar4;
        long lVar5;
        uint* puVar6;
        byte bVar7;
        int iVar8;
        uint uVar9;
        VarBitType local_48;

        local_48.List(param_1);
        piVar4 =
            (int*)shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_48);
        iVar8 = *piVar4;
        lVar5 = shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_48);
        iVar1 = *(int*)(lVar5 + 4);
        lVar5 = shared_ptr<configdecoder::VarBitType>::operator->((shared_ptr<configdecoder::VarBitType>*)&local_48);
        piVar4 = (int*)std::array<int, 32ul>::operator[]((long)*(int*)(lVar5 + 8) - (long)iVar1);
        iVar2 = *piVar4;
        bVar7 = (byte)iVar1;
        uVar9 = iVar2 << (bVar7 & 31);
        puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_var, (long)iVar8);
        uVar3 = *puVar6;
        puVar6 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_var, (long)iVar8);
        iVar8 = param_2;
        if (iVar2 < param_2) {
            iVar8 = 0;
        }
        if (param_2 < 0) {
            iVar8 = 0;
        }
        *puVar6 = iVar8 << (bVar7 & 31) & uVar9 | uVar3 & ~uVar9;
        local_48.~shared_ptr();
    }

    // 0x100226500, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&ClientVarCache::m_varServ) Array<int, eastl::allocator>(4000);
        ___cxa_atexit(PTR__Array_100ee6800, &ClientVarCache::m_varServ, 4294967296);
    }

    // 0x100226540, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        new (&ClientVarCache::m_var) Array<int, eastl::allocator>(4000);
        ___cxa_atexit(PTR__Array_100ee6800, &ClientVarCache::m_var, 4294967296);
    }

} // namespace jag::oldscape
