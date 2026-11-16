// projects/osclient/debug/ObjSpriteExporter.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

namespace jag::oldscape::debug {
    class ObjSpriteExporter {
    public:
        void ExportObjSprite(int arg1, int arg2, int arg3, const Filename& filename);
        void ExportAllObjSprites(int arg1, int arg2, const Filename& filename);

        uint8_t _unknown_0[1];
    };

    // 0x100060940
    void ObjSpriteExporter::ExportObjSprite(int arg1, int arg2, int arg3, const Filename& filename) {
        bool bVar2;
        int iVar3;
        int arg2_00;
        int* piVar4;
        long lVar5;
        uint64_t uVar6;
        uint8_t local_3f0[24];
        ReturnValue local_298;
        fixed_string<char, 260> local_168;

        *((local_3f0 + 24)) = configdecoder::ObjType::List((int)this);
        if (((local_3f0 + 24))->operator_cast_to_bool() != '\0') {
            piVar4 = (int*)(*((local_3f0 + 24))).operator->();
            if (*piVar4 != -1) {
                lVar5 = (*((local_3f0 + 24))).operator->();
                if (*(int*)(lVar5 + 732) == -1) {
                    lVar5 = (*((local_3f0 + 24))).operator->();
                    if (*(int*)(lVar5 + 832) == -1) {
                        lVar5 = (*((local_3f0 + 24))).operator->();
                        if (*(int*)(lVar5 + 840) == -1) {
                            iVar3 = *(*((local_3f0 + 24)));
                            local_3f0._20_4_ = arg1 / 50 + 1;
                            configdecoder::ObjType::GetBaseSprite(*local_3f0, iVar3, arg1, arg2, 1, local_3f0._20_4_);
                            iVar3 = 501;
                            while (true) {
                                iVar3 = iVar3 - 1;
                                if (iVar3 == 0)
                                    break;
                                bVar2 = *local_3f0 == nullptr;
                                if (!bVar2)
                                    break;
                                arg2_00 = *(*((local_3f0 + 24)));
                                configdecoder::ObjType::GetBaseSprite(local_168, arg2_00, arg1, arg2, 1,
                                                                      local_3f0._20_4_);
                                *local_3f0 = local_168;
                                this_thread::Sleep(1);
                            }
                            bVar2 = *local_3f0 != nullptr;
                            if (bVar2) {
                                local_168 = eastl::fixed_string<char, 260>();
                                (*((local_3f0 + 24))).operator->();
                                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_168.sprintf("%d_%s.png", (unsigned long)this & 4294967295, uVar6);
                                local_298 = Filename::SanitiseFileName(local_168);
                                local_168 = &local_298;
                            }
                        }
                    }
                }
            }
        }
        ((local_3f0 + 24))->~shared_ptr();
    }

    // 0x100060d40
    void ObjSpriteExporter::ExportAllObjSprites(int arg1, int arg2, const Filename& filename) {
        unsigned int uVar1;
        Filename* in_R8;

        if (0 < configdecoder::ObjType::m_numDefinitions) {
            uVar1 = 0;
            do {
                ExportObjSprite((ObjSpriteExporter*)(unsigned long)uVar1, (int)this, arg1, arg2, in_R8);
                uVar1 = uVar1 + 1;
            } while ((int)uVar1 < configdecoder::ObjType::m_numDefinitions);
        }
    }

} // namespace jag::oldscape::debug
