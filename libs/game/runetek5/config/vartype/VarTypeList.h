// libs/game/runetek5/config/vartype/VarTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class VarTypeList {
    public:
        // virtual methods in vtable order
        virtual ~VarTypeList();
        void DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
            std::pair<unsigned int, VarValue>&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        GetDomain();
        VarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&,
                    Js5ConfigGroup const*, VarDomainType*);

        // data members, from how the methods use this: 120 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[104];
        undefined8 m_domain; // offset 112
    };

    // 0x1004b9b40, 144 bytes, inline, placed by class name and debug map
    // void VarTypeList::DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(std::pair<unsigned int, VarValue>&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    /* void VarTypeList::DecodeVarValue<PacketT<Array<unsigned char,
   BucketAllocatorEASTL> > >(std::pair<unsigned int, VarValue>&,
   PacketT<Array<unsigned char, BucketAllocatorEASTL> >&) */

    void VarTypeList::DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(pair* param_1,
                                                                                          PacketT* param_2) {
        ushort uVar1;
        shared_ptr* psVar2;
        EnumType* this_00;
        long lVar3;
        shared_ptr<oldscape::dash3d::Decor> local_38[16];

        uVar1 = param_2->g2();
        psVar2 = (shared_ptr*)List((uint)uVar1, 0);
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_38, psVar2);
        *(uint*)param_1 = (uint)uVar1;
        this_00 = (EnumType*)shared_ptr<VarType>::operator->((shared_ptr<VarType>*)local_38);
        lVar3 = this_00->GetOutputType();
        (**(code**)(**(long**)(lVar3 + 8) + 32))(*(long**)(lVar3 + 8), param_1 + 8, param_2);
        local_38->~shared_ptr();
    }

    // 0x1004d1d80, 16 bytes, complete-object destructor, inline, placed by class name
    // VarTypeList::~VarTypeList(): jumps straight to the base-object destructor

    // 0x1004d1d90, 32 bytes, deleting destructor, inline, placed by class name
    // VarTypeList::~VarTypeList()
    void VarTypeList::~VarTypeList() {
        ~VarTypeList(this);
        operator_delete(this);
    }

} // namespace jag::game
