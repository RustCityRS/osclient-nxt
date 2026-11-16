// libs/oldscape/jagex3/dash3d/TextureCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "TextureCache.h"

namespace jag::oldscape::dash3d {
    // 0x100303720
    TextureCache::TextureCache(jagex3::Js5* js51, jagex3::Js5* js52, int arg3, double arg4, int arg5) {
        int* piVar2;
        PacketJ<Array<unsigned char> _>* packetJ;
        shared_ptr<Texture>* this_01;
        unsigned long arg1;
        ErrorCapture local_3d8;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_88;
        ReturnValue local_78;

        double local_40 = arg4;
        new (this) TextureProvider();
        vector<shared_ptr<Texture>>* local_48 = (vector<shared_ptr<Texture>>*)&field_8;
        new (local_48) eastl::vector<shared_ptr<Texture>>();
        uint8_t* local_38 = &field_40;
        new (local_38) SharedPtrList<Texture>();
        field_80 = js52;
        field_56 = arg3;
        field_60 = arg3;
        m_gamma = local_40;
        field_72 = arg5;
        vector<int, BucketAllocatorEASTL> local_68;
        js51->GetFileList(local_68, 0);
        local_40 = (double)local_68.size();
        int iVar1 = js51->GetFileIdLimit(0);
        local_48->resize((long)iVar1);
        if (local_40 != 0.0) {
            arg1 = 0;
            do {
                local_88 = shared_ptr();
                piVar2 = &local_68[arg1];
                js51->GetFile(local_88, 0, *piVar2, nullptr);
                local_3d8 = ErrorCapture(true);
                packetJ = (PacketJ<Array<unsigned char> _>*)*local_88;
                make_shared<Texture, PacketJ<Array<unsigned char>>&, ErrorCapture&>(&local_78, packetJ, &local_3d8);
                piVar2 = &local_68[arg1];
                this_01 = (shared_ptr<Texture>*)(*local_48)[(long)*piVar2];
                *this_01 = local_78;
                arg1 = arg1 + 1;
            } while (local_40 != (double)arg1);
        }
    }

    // 0x100303ae0
    unsigned long TextureCache::RequestTextureImageDownloadPercent() {
        uint8_t bVar4;
        long lVar6;
        int* piVar7;
        int* piVar8;
        shared_ptr<RSevenDebugPresetProvider> local_60;
        uint64_t local_50;
        shared_ptr<GroundDecor>* local_40;

        auto groundDecor = field_8.HeapBeginPtr();
        auto psVar5 = field_8.end();
        int iVar10 = 0;
        unsigned long local_38 = 0;
        if (groundDecor != psVar5) {
            local_38 = 0;
            iVar10 = 0;
            local_40 = psVar5;
            do {
                local_60 = shared_ptr(groundDecor);
                if (!local_60 == nullptr) {
                    lVar6 = local_60.operator->();
                    if (((lVar6 + 56))->empty() == '\0') {
                        lVar6 = local_60.operator->();
                        local_50 = ((lVar6 + 56))->end();
                        lVar6 = local_60.operator->();
                        piVar7 = (int*)((lVar6 + 56))->data();
                        piVar8 = (int*)((lVar6 + 56))->end();
                        local_38 = (unsigned long)(unsigned int)((int)local_38 + (int)local_50);
                        psVar5 = local_40;
                        for (; local_40 = psVar5, piVar7 != piVar8; piVar7 = piVar7 + 1) {
                            bVar4 = field_80->RequestDownload(*piVar7);
                            iVar10 = iVar10 + (unsigned int)bVar4;
                            psVar5 = local_40;
                        }
                    }
                }
                groundDecor = groundDecor + 16;
            } while (groundDecor != psVar5);
        }
        unsigned long uVar9 = 0;
        if ((int)local_38 != 0) {
            uVar9 = (unsigned long)(unsigned int)(iVar10 * 100) / (local_38 & 4294967295);
        }
        return uVar9;
    }

    // 0x100303c50
    void TextureCache::SetGamma(double arg1) {
        m_gamma = arg1;
        ClearCache();
    }

    // 0x100303c60
    void TextureCache::ClearCache() {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_8.HeapBeginPtr();
        auto psVar2 = field_8.end();
        for (; midiPlayerMainThread != psVar2; midiPlayerMainThread = midiPlayerMainThread + 16) {
            if (*midiPlayerMainThread != nullptr) {
                ((Texture*)(*midiPlayerMainThread).operator->())->Deconstruct();
            }
        }
        field_40.clear();
        field_60 = field_56;
    }

    // 0x100303ce0
    auto TextureCache::GetTexture(int arg1) {
        shared_ptr<GroundDecor>* groundDecor = &field_8[(long)arg1];
        return auto(groundDecor);
    }

    // 0x100303d10
    TextureCache* TextureCache::GetAllTextureData() {
        bool cVar2;
        shared_ptr<GroundDecor>* groundDecor;
        Array<unsigned int>* pAVar4;
        long lVar5;
        Array<unsigned int>* arg1;
        int iVar6;
        long in_RSI;
        unsigned int uVar7;
        ErrorCapture local_3e0;
        shared_ptr<Decor> local_60;

        map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe>> local_90(local_3e0);
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_00 =
            (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 8);
        int local_34 = 0;
        long local_48 = in_RSI;
        int iVar3 = this_00->size();
        if (0 < iVar3) {
            do {
                groundDecor = (shared_ptr<GroundDecor>*)(*this_00)[(long)local_34];
                local_60 = shared_ptr(groundDecor);
                if (local_60 == nullptr) {
                    pAVar4 = &local_90[local_34];
                    uVar7 = 4;
                    pAVar4->set_max_size(0, 0);
                } else {
                    local_3e0 = ErrorCapture(true);
                    cVar2 = ((Texture*)local_60.operator->())
                                ->Construct(*(double*)(local_48 + 64), *(int*)(local_48 + 72),
                                            *(*(Js5**)(local_48 + 80)), local_3e0);
                    if (!cVar2) {
                        cVar2 = local_3e0.IsRaised();
                        uVar7 = 0;
                        if (!cVar2) {
                            new (this) eastl::map(local_50);
                            uVar7 = 1;
                        }
                    } else {
                        lVar5 = local_60.operator->();
                        arg1 = (Array<unsigned int>*)*(*((lVar5 + 168)));
                        pAVar4 = &local_90[local_34];
                        uVar7 = 0;
                        *pAVar4 = *arg1;
                    }
                }
                if ((uVar7 & 3) != 0)
                    goto LAB_100303ec3;
                iVar6 = local_34 + 1;
                local_34 = iVar6;
                iVar3 = this_00->size();
            } while (iVar6 < iVar3);
        }
        uVar7 = 2;
    LAB_100303ec3:
        if (uVar7 == 2) {
            new (this) eastl::map(local_90);
        }
        return this;
    }

    // 0x100303ff0
    auto TextureCache::GetTextureData(int arg1, ErrorCapture& errorCapture) {
        bool cVar2;
        long lVar4;
        Texture* pTVar5;
        ReturnValue local_50;

        shared_ptr<GroundDecor>* groundDecor = &field_8[(long)arg1];
        shared_ptr<Decor> local_40(groundDecor);
        if (local_40 == nullptr) {
            auto result;
        } else {
            lVar4 = local_40.operator->();
            if ((*((lVar4 + 168))) != nullptr) {
                field_40.push_front(local_40);
                lVar4 = local_40.operator->();
                *(uint8_t*)(lVar4 + 184) = 1;
                lVar4 = local_40.operator->();
                new (&result) shared_ptr((lVar4 + 168));
            } else {
                pTVar5 = (Texture*)local_40.operator->();
                cVar2 = pTVar5->Construct(m_gamma, field_72, *field_80, errorCapture);
                if (errorCapture.IsRaised() == '\0') {
                    if (!cVar2) {
                        new (&result) shared_ptr();
                    } else {
                        if (field_60 == 0) {
                            local_50 = field_40.takeBackAndPop();
                            pTVar5 = (Texture*)local_50.operator->();
                            pTVar5->Deconstruct();
                        } else {
                            field_60 = field_60 - 1;
                        }
                        field_40.push_front(local_40);
                        lVar4 = local_40.operator->();
                        *(uint8_t*)(lVar4 + 184) = 1;
                        lVar4 = local_40.operator->();
                        new (&result) shared_ptr((lVar4 + 168));
                    }
                } else {
                    new (&result) shared_ptr();
                }
            }
        }
        return result;
    }

    // 0x100304320
    uint32_t TextureCache::GetTextureColour(int arg1) {
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<Texture>* this_00;
        long lVar2;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_8[(long)arg1];
        uint32_t uVar3 = 0;
        if (*midiPlayerMainThread != nullptr) {
            this_00 = &field_8[(long)arg1];
            lVar2 = (*this_00).operator->();
            uVar3 = *(uint32_t*)(lVar2 + 48);
        }
        return uVar3;
    }

    // 0x100304380
    uint8_t TextureCache::GetTextureSolid(int arg1) {
        shared_ptr<Texture>* this_00 = &field_8[(long)arg1];
        long lVar1 = (*this_00).operator->();
        return *(uint8_t*)(lVar1 + 52);
    }

    // 0x1003043a0
    bool TextureCache::GetTextureSmall(int arg1) {
        return field_72 == 64;
    }

    // 0x1003043b0
    void TextureCache::GetTextureCount() {
        field_8.size();
    }

    // 0x1003043c0
    void TextureCache::RunAnims(int arg1) {
        long lVar1;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)field_8.HeapBeginPtr();
        auto psVar3 = field_8.end();
        for (; midiPlayerMainThread != psVar3; midiPlayerMainThread = midiPlayerMainThread + 16) {
            if ((*midiPlayerMainThread != nullptr) &&
                (lVar1 = (*midiPlayerMainThread).operator->(), *(int*)(lVar1 + 152) != 0)) {
                ((Texture*)(*midiPlayerMainThread).operator->())->RunAnim(arg1);
            }
        }
    }

} // namespace jag::oldscape::dash3d
