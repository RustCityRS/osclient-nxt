// libs/oldscape/rs2lib/util/ClientVarCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape {
    class ClientVarCache {
    public:
        unsigned int GetVarbit(int arg1);
        void SetVarbit(int arg1, int arg2);
        static Array<int> m_varServ; // = Array<int>(4000)
        static Array<int> m_var;     // = Array<int>(4000)
    };

    // 0x100fc9210, set at startup by ___cxx_global_var_init
    Array<int> ClientVarCache::m_varServ = Array<int>(4000);

    // 0x100fc9228, set at startup by ___cxx_global_var_init.12
    Array<int> ClientVarCache::m_var = Array<int>(4000);

    // 0x1001fb8f0
    unsigned int ClientVarCache::GetVarbit(int arg1) {
        unsigned long arg1_00 = (unsigned long)(unsigned int)arg1;
        auto local_38 = configdecoder::VarBitType::List(arg1);
        auto piVar4 = local_38.operator->();
        int iVar1 = *piVar4;
        long lVar5 = local_38.operator->();
        int iVar2 = *(int*)(lVar5 + 4);
        lVar5 = local_38.operator->();
        unsigned int* puVar6 = (unsigned int*)(*((array<int, 32ul>*)((long)*(int*)(lVar5 + 8) - (long)iVar2)))[arg1_00];
        unsigned int uVar3 = *puVar6;
        piVar4 = &m_var[(long)iVar1];
        iVar1 = *piVar4;
        return iVar1 >> ((uint8_t)iVar2 & 31) & uVar3;
    }

    // 0x1001fb9f0
    void ClientVarCache::SetVarbit(int arg1, int arg2) {
        unsigned long arg1_00 = (unsigned long)(unsigned int)arg1;
        auto local_48 = configdecoder::VarBitType::List(arg1);
        auto piVar4 = local_48.operator->();
        int iVar8 = *piVar4;
        long lVar5 = local_48.operator->();
        int iVar1 = *(int*)(lVar5 + 4);
        lVar5 = local_48.operator->();
        piVar4 = (int*)(*((array<int, 32ul>*)((long)*(int*)(lVar5 + 8) - (long)iVar1)))[arg1_00];
        int iVar2 = *piVar4;
        uint8_t bVar7 = (uint8_t)iVar1;
        unsigned int uVar9 = iVar2 << (bVar7 & 31);
        unsigned int* puVar6 = &m_var[(long)iVar8];
        unsigned int uVar3 = *puVar6;
        puVar6 = &m_var[(long)iVar8];
        iVar8 = arg2;
        if (iVar2 < arg2) {
            iVar8 = 0;
        }
        if (arg2 < 0) {
            iVar8 = 0;
        }
        *puVar6 = iVar8 << (bVar7 & 31) & uVar9 | uVar3 & ~uVar9;
    }

} // namespace jag::oldscape
