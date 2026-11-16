// libs/game/runetek5/config/vartype/VarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class VarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~VarTypeList();
        void DecodeVarValue<PacketT<Array<unsigned char>>>(std::pair<unsigned int, VarValue>& arg1,
                                                           PacketT<Array<unsigned char>>& arg2);
        VarDomainType* GetDomain();
        VarTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                    const Language* language, Js5ResourceProvider& js5ResourceProvider,
                    const Js5ConfigGroup* js5ConfigGroup, VarDomainType* varDomainType);

    private:
        uint8_t _unknown_8[104];
        VarDomainType* m_pDomain;
    };

    // 0x1004b9b40
    void VarTypeList::DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
        std::pair<unsigned int, VarValue>& arg1, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        unsigned short uVar1 = arg2.g2();
        auto groundDecor = List((unsigned int)uVar1, nullptr);
        shared_ptr<oldscape::dash3d::Decor> local_38(groundDecor);
        *(unsigned int*)arg1 = (unsigned int)uVar1;
        long lVar2 = ((EnumType*)local_38.operator->())->GetOutputType();
        (**(void (**)(...))(**(long**)(lVar2 + 8) + 32))(*(long**)(lVar2 + 8), arg1 + 8, arg2);
    }

} // namespace jag::game
