// projects/osclient/OldscapeVarTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OldscapeVarTypeList.h"

namespace jag::oldscape::configdecoder {
    // 0x10013f6a0: the linker folded this into game::BaseTemplateConfigTypeList<OldscapeVarType>::~BaseTemplateConfigTypeList(), which has identical code
    OldscapeVarTypeList::~OldscapeVarTypeList();

    // 0x10018bbf0, 272 bytes, placed by class name and debug map
    // OldscapeVarTypeList::List(int)
    OldscapeVarTypeList* OldscapeVarTypeList::List(int param_1) {
        undefined1 uVar1;
        undefined* puVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        long* plVar3;
        undefined8 uVar4;
        uint in_EDX;
        undefined4 in_register_00000034;
        OldscapeVarTypeList* pOVar5;
        OldscapeVarTypeList* local_58;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50[16];
        shared_ptr local_40;
        uint local_2c;

        pOVar5 = (OldscapeVarTypeList*)CONCAT44(in_register_00000034, param_1);
        local_2c = in_EDX;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_50, (_func_decltype_nullptr*)pOVar5);
        puVar2 = (undefined*)((shared_ptr*)pOVar5->field_112, (int)local_50, pOVar5->field_120, (array*)(ulong)local_2c)
                     ->GetFile();
        if (puVar2 == DataStatus::READY) {
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
            uVar1 = this_00->g1();
            local_58 = pOVar5;
            make_shared<OldscapeVarType, OldscapeVarTypeList*, int&>((jag*)&local_40, &local_58, (int*)&local_2c);
            plVar3 = (long*)shared_ptr<OldscapeVarType>::operator->((shared_ptr<OldscapeVarType>*)&local_40);
            uVar4 = shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_50);
            puVar2 = (undefined*)(**(code**)(*plVar3 + 16))(plVar3, uVar4, uVar1);
            if (puVar2 == DataStatus::READY) {
                shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                    (shared_ptr<RSevenDebugPresetProvider>*)this, &local_40);
            } else {
                new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            }
            local_40.~shared_ptr();
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        local_50->~shared_ptr();
        return this;
    }

    // 0x10018be30, 240 bytes, placed by class name and debug map
    // OldscapeVarTypeList::DecodeVarValue(std::pair<unsigned int, game::VarValue>&, core::SuperPacket&)
    /* OldscapeVarTypeList::DecodeVarValue(std::pair<unsigned int,
   game::VarValue>&, core::SuperPacket&) */

    void OldscapeVarTypeList::DecodeVarValue(pair* param_1, SuperPacket* param_2) {
        ushort uVar2;
        OldscapeVarType* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long* plVar3;
        VarValue local_60[32];
        shared_ptr<OldscapeVarType> local_40[16];

        uVar2 = param_2->g2();
        List((OldscapeVarTypeList*)local_40, (int)this);
        if (operator!=((shared_ptr*)local_40, (_func_decltype_nullptr*)0)) {
            this_00 = (OldscapeVarType*)shared_ptr<OldscapeVarType>::operator->(local_40);
            this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetDataType();
            plVar3 = (long*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (plVar3 != (long*)0) {
                *(uint*)param_1 = (uint)uVar2;
                (**(code**)(*plVar3 + 32))(plVar3, param_1 + 8, param_2);
                goto LAB_10018bede;
            }
        }
        *(undefined4*)param_1 = 4294967295;
        game::VarValue::VarValue(local_60);
        game::VarValue::operator=((VarValue*)(param_1 + 8), local_60);
        local_60->~VarValue();
    LAB_10018bede:
        local_40->~shared_ptr();
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10018bd40, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type make_shared<oldscape::configdecoder::OldscapeVarType, oldscape::configdecoder::OldscapeVarTypeList*, int&>(oldscape::configdecoder::OldscapeVarTypeList*&&, int&)
    jag*
    jag::make_shared<oldscape::configdecoder::OldscapeVarType, oldscape::configdecoder::OldscapeVarTypeList*, int&>(
        OldscapeVarTypeList** param_1, int* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        OldscapeVarType* local_38[2];

        pvVar1 = (void*)aligned_alloc(168, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::configdecoder::OldscapeVarType,
                                        game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                        unsigned int&>((void*)((long)pvVar1 + 32),
                                                       (BaseTemplateConfigTypeList**)param_1, (uint*)param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarType>, int,
                                                      oldscape::configdecoder::OldscapeVarType*&>(pvVar1, &local_3c,
                                                                                                  local_38);
            shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(prVar2, local_38[0],
                                                                                            (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
