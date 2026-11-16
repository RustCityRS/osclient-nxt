// projects/osclient/debug/ObjSpriteExporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

namespace jag::oldscape::debug {
    class ObjSpriteExporter {
    public:
        void ExportObjSprite(int, int, int, Filename const&);
        void ExportAllObjSprites(int, int, Filename const&);
    };

    // 0x100060940, 816 bytes, placed by class name and debug map
    // ObjSpriteExporter::ExportObjSprite(int, int, int, Filename const&)
    void ObjSpriteExporter::ExportObjSprite(int param_1, int param_2, int param_3, Filename* param_4) {
        bool bVar1;
        int* piVar2;
        long lVar3;
        ObjType* pOVar4;
        undefined8 uVar5;
        int iVar6;
        undefined1 local_3f0[24];
        undefined1 local_3d8[320];
        Filename local_298[19];
        fixed_string<char, 260, true, eastl::allocator> local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_3d8->List(param_1);
        bVar1 = local_3d8->operator_cast_to_bool();
        if (bVar1) {
            piVar2 =
                (int*)shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_3d8);
            if (*piVar2 != -1) {
                lVar3 = shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_3d8);
                if (*(int*)(lVar3 + 732) == -1) {
                    lVar3 =
                        shared_ptr<configdecoder::ObjType>::operator->((shared_ptr<configdecoder::ObjType>*)local_3d8);
                    if (*(int*)(lVar3 + 832) == -1) {
                        lVar3 = shared_ptr<configdecoder::ObjType>::operator->(
                            (shared_ptr<configdecoder::ObjType>*)local_3d8);
                        if (*(int*)(lVar3 + 840) == -1) {
                            pOVar4 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator*(
                                (shared_ptr<configdecoder::ObjType>*)local_3d8);
                            local_3f0._20_4_ = param_2 / 50 + 1;
                            local_3f0->GetBaseSprite(pOVar4, param_2, param_3, 1, local_3f0._20_4_, 1);
                            iVar6 = 501;
                            while (true) {
                                iVar6 = iVar6 + -1;
                                if (iVar6 == 0)
                                    break;
                                bVar1 = operator==((shared_ptr*)local_3f0, (_func_decltype_nullptr*)0);
                                if (!bVar1)
                                    break;
                                pOVar4 = (ObjType*)shared_ptr<configdecoder::ObjType>::operator*(
                                    (shared_ptr<configdecoder::ObjType>*)local_3d8);
                                local_168->GetBaseSprite(pOVar4, param_2, param_3, 1, local_3f0._20_4_, 1);
                                shared_ptr<configdecoder::ObjSprite>::operator=(
                                    (shared_ptr<configdecoder::ObjSprite>*)local_3f0, (shared_ptr*)local_168);
                                local_168->~shared_ptr();
                                this_thread::Sleep(1);
                            }
                            bVar1 = operator!=((shared_ptr*)local_3f0, (_func_decltype_nullptr*)0);
                            if (bVar1) {
                                eastl::fixed_string<char, 260, true, eastl::allocator>::fixed_string(local_168);
                                shared_ptr<configdecoder::ObjType>::operator->(
                                    (shared_ptr<configdecoder::ObjType>*)local_3d8);
                                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                eastl::basic_string<
                                    char, eastl::fixed_vector_allocator<1ul, 260ul, 1ul, 0ul, true, eastl::allocator>>::
                                    sprintf((char*)local_168, "%d_%s.png", (ulong)(uint)param_1, uVar5);
                                ((local_3d8 + 320))->SanitiseFileName(local_168);
                                eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
                                    (fixed_string<char, 4096, true, eastl::allocator>*)local_168,
                                    (fixed_string*)(local_3d8 + 320));
                                /* WARNING: Subroutine does not return */
                                ((local_3d8 + 320))->~fixed_string();
                            }
                            local_3f0->~shared_ptr();
                        }
                    }
                }
            }
        }
        local_3d8->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100060d40, 96 bytes, placed by class name and debug map
    // ObjSpriteExporter::ExportAllObjSprites(int, int, Filename const&)
    void ObjSpriteExporter::ExportAllObjSprites(int param_1, int param_2, Filename* param_3) {
        int iVar1;

        if (0 < configdecoder::ObjType::m_numDefinitions) {
            iVar1 = 0;
            do {
                ExportObjSprite(iVar1, param_1, param_2, param_3);
                iVar1 = iVar1 + 1;
            } while (iVar1 < configdecoder::ObjType::m_numDefinitions);
        }
    }

} // namespace jag::oldscape::debug
