// projects/osclient/OldscapeVarTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OldscapeVarTypeList.h"

namespace jag::oldscape::configdecoder {
    // 0x10013f6a0: OldscapeVarTypeList::~OldscapeVarTypeList() has the same machine code as game::BaseTemplateConfigTypeList<OldscapeVarType>::~BaseTemplateConfigTypeList()

    // 0x10018bbf0
    auto OldscapeVarTypeList::List(int arg1) {
        uint8_t uVar1;
        long* plVar3;
        uint64_t uVar4;
        OldscapeVarTypeList* local_58;
        ReturnValue local_40;

        int local_2c = arg1;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_50;
        auto puVar2 = field_112->GetFile(local_50, field_120, local_2c, nullptr);
        if (puVar2 == DataStatus::READY) {
            uVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_50.operator->())->g1();
            local_58 = this;
            make_shared<OldscapeVarType, OldscapeVarTypeList*, int&>(&local_40, &local_58, &local_2c);
            plVar3 = (long*)local_40.operator->();
            uVar4 = *local_50;
            puVar2 = (uint8_t*)(**(void (**)(...))(*plVar3 + 16))(plVar3, uVar4, uVar1);
            if (puVar2 == DataStatus::READY) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                auto result;
            }
        } else {
            new (&result) shared_ptr();
        }
        return result;
    }

    // 0x10018be30
    void OldscapeVarTypeList::DecodeVarValue(std::pair<unsigned int, game::VarValue>& arg1,
                                             core::SuperPacket& superPacket) {
        OldscapeVarType* this_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        long* plVar3;
        ReturnValue local_40;

        unsigned short uVar2 = superPacket.g2();
        List(&local_40, this, (unsigned int)uVar2);
        if (local_40 != nullptr) {
            this_00 = (OldscapeVarType*)local_40.operator->();
            this_01 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->GetDataType();
            plVar3 = (long*)this_01->end();
            if (plVar3 != nullptr) {
                *(unsigned int*)arg1 = (unsigned int)uVar2;
                (**(void (**)(...))(*plVar3 + 32))(plVar3, arg1 + 8, superPacket);
                goto LAB_10018bede;
            }
        }
        *(uint32_t*)arg1 = 4294967295;
        VarValue local_60;
        (*((arg1 + 8))) = &local_60;
    LAB_10018bede:
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10018bd40
    shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type
    make_shared<oldscape::configdecoder::OldscapeVarType, oldscape::configdecoder::OldscapeVarTypeList*, int&>(
        oldscape::configdecoder::OldscapeVarTypeList*&& arg1, int& arg2) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        OldscapeVarType* local_38[2];

        auto arg1_00 = aligned_alloc(168, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::OldscapeVarType>::type result;
        } else {
            local_38[0] = placement_new<oldscape::configdecoder::OldscapeVarType,
                                        game::BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>*&,
                                        unsigned int&>(
                (void*)((long)arg1_00 + 32),
                (BaseTemplateConfigTypeList<oldscape::configdecoder::OldscapeVarType>**)arg1, arg2);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<oldscape::configdecoder::OldscapeVarType>, int,
                                                 oldscape::configdecoder::OldscapeVarType*&>(arg1_00, &local_3c,
                                                                                             local_38);
            shared_ptr_do_enable_shared_from_this<oldscape::configdecoder::OldscapeVarType>(ref_counter_base,
                                                                                            local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
