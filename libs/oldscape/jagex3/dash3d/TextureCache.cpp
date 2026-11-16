// libs/oldscape/jagex3/dash3d/TextureCache.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "TextureCache.h"

namespace jag::oldscape::dash3d {
    // 0x100303720, 496 bytes, base-object constructor, placed by class name and debug map
    // TextureCache::TextureCache(jagex3::Js5*, jagex3::Js5*, int, double, int)
    void TextureCache::TextureCache(Js5* param_1, Js5* param_2, int param_3, double param_4, int param_5) {
        int iVar1;
        uint* puVar2;
        PacketJ* pPVar3;
        int* piVar4;
        shared_ptr<Texture>* this_01;
        ulong uVar5;
        shared_ptr* psVar6;
        ErrorCapture local_3d8[17];
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_88[16];
        shared_ptr local_78;
        vector local_68[24];
        vector<shared_ptr<Texture>, eastl::allocator>* local_48;
        double local_40;
        undefined1* local_38;

        local_40 = param_4;
        new (this) TextureProvider();
        field_0 = &PTR_GetTexture_100eface0;
        local_48 = (vector<shared_ptr<Texture>, eastl::allocator>*)&field_8;
        eastl::vector<shared_ptr<Texture>, eastl::allocator>::vector(local_48);
        local_38 = &field_40;
        new (local_38) SharedPtrList<Texture>();
        field_80 = param_2;
        field_56 = param_3;
        field_60 = param_3;
        m_gamma = local_40;
        field_72 = param_5;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        param_1->GetFileList(local_68, 0);
        local_40 = (double)local_68->size();
        iVar1 = param_1->GetFileIdLimit(0);
        psVar6 = (shared_ptr*)(long)iVar1;
        eastl::vector<shared_ptr<Texture>, eastl::allocator>::resize(local_48, (ulong)psVar6);
        if (local_40 != 0.0) {
            uVar5 = 0;
            do {
                shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_88,
                                                                               (_func_decltype_nullptr*)psVar6);
                puVar2 = (uint*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)local_68, uVar5);
                ((shared_ptr*)param_1)->GetFile((int)local_88, 0, (array*)(ulong)*puVar2);
                ErrorCapture::ErrorCapture(local_3d8, true);
                pPVar3 = (PacketJ*)shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>::operator*(
                    (shared_ptr<PacketJ<Array<unsigned char, eastl::allocator>>>*)local_88);
                make_shared<Texture, PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&>(
                    (jag*)&local_78, pPVar3, local_3d8);
                piVar4 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                    (vector<int, BucketAllocatorEASTL>*)local_68, uVar5);
                this_01 = (shared_ptr<Texture>*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
                    local_48, (long)*piVar4);
                psVar6 = &local_78;
                shared_ptr<Texture>::operator=(this_01, &local_78);
                local_78.~shared_ptr();
                local_3d8->~LanguageMessage();
                local_88->~shared_ptr();
                uVar5 = uVar5 + 1;
            } while (local_40 != (double)uVar5);
        }
        local_68->~vector_set();
    }

    // 0x100303ad0, 16 bytes, complete-object constructor, placed by class name
    // TextureCache::TextureCache(jagex3::Js5*, jagex3::Js5*, int, double, int): jumps straight to the base-object constructor

    // 0x100303ae0, 368 bytes, placed by class name
    // TextureCache::RequestTextureImageDownloadPercent()
    ulong TextureCache::RequestTextureImageDownloadPercent() {
        char cVar3;
        byte bVar4;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        long lVar7;
        int* piVar8;
        int* piVar9;
        ulong uVar10;
        int iVar11;
        shared_ptr local_60;
        undefined8 local_50;
        shared_ptr* local_40;
        ulong local_38;

        psVar5 = (shared_ptr*)(&field_8)->HeapBeginPtr();
        psVar6 = (shared_ptr*)(&field_8)->end();
        iVar11 = 0;
        local_38 = 0;
        if (psVar5 != psVar6) {
            local_38 = 0;
            iVar11 = 0;
            local_40 = psVar6;
            do {
                new (&local_60) shared_ptr<Decor>(psVar5);
                if (!operator==(&local_60, (_func_decltype_nullptr*)0)) {
                    lVar7 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                    cVar3 = ((lVar7 + 56))->empty();
                    if (cVar3 == '\0') {
                        lVar7 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                        local_50 = ((lVar7 + 56))->end();
                        lVar7 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                        piVar8 = (int*)((lVar7 + 56))->data();
                        piVar9 = (int*)((lVar7 + 56))->end();
                        local_38 = (ulong)(uint)((int)local_38 + (int)local_50);
                        psVar6 = local_40;
                        for (; local_40 = psVar6, piVar8 != piVar9; piVar8 = piVar8 + 1) {
                            bVar4 = (((TextureCache*)this)->field_80, *piVar8)->RequestDownload();
                            iVar11 = iVar11 + (uint)bVar4;
                            psVar6 = local_40;
                        }
                    }
                }
                local_60.~shared_ptr();
                psVar5 = psVar5 + 1;
            } while (psVar5 != psVar6);
        }
        uVar10 = 0;
        if ((int)local_38 != 0) {
            uVar10 = (ulong)(uint)(iVar11 * 100) / (local_38 & 4294967295);
        }
        return uVar10;
    }

    // 0x100303c50, 16 bytes, placed by class name
    // TextureCache::SetGamma(double)
    void TextureCache::SetGamma(double param_1) {
        m_gamma = param_1;
        ClearCache(this);
    }

    // 0x100303c60, 128 bytes, placed by class name
    // TextureCache::ClearCache()
    void TextureCache::ClearCache() {
        shared_ptr* this_00;
        shared_ptr* psVar2;
        Texture* this_01;

        this_00 = (shared_ptr*)(&field_8)->HeapBeginPtr();
        psVar2 = (shared_ptr*)(&field_8)->end();
        for (; this_00 != psVar2; this_00 = this_00 + 1) {
            if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                this_01 = (Texture*)shared_ptr<Texture>::operator->((shared_ptr<Texture>*)this_00);
                this_01->Deconstruct();
            }
        }
        (&field_40)->clear();
        field_60 = field_56;
    }

    // 0x100303ce0, 48 bytes, placed by class name
    // TextureCache::GetTexture(int)
    TextureCache* TextureCache::GetTexture(int param_1) {
        shared_ptr* psVar1;
        int in_EDX;
        undefined4 in_register_00000034;

        psVar1 = (shared_ptr*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
            (vector<shared_ptr<Texture>, eastl::allocator>*)(CONCAT44(in_register_00000034, param_1) + 8),
            (long)in_EDX);
        new (this) shared_ptr<Decor>(psVar1);
        return this;
    }

    // 0x100303d10, 560 bytes, placed by class name
    // TextureCache::GetAllTextureData()
    TextureCache* TextureCache::GetAllTextureData() {
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_00;
        char cVar2;
        int iVar3;
        shared_ptr* psVar4;
        Array<unsigned int, eastl::allocator>* pAVar5;
        Texture* this_01;
        long lVar6;
        Array* pAVar7;
        int iVar8;
        long in_RSI;
        uint uVar9;
        ErrorCapture local_3e0[17];
        allocator local_90[48];
        shared_ptr local_60;
        allocator local_50[8];
        long local_48;
        int local_34;

        new (local_3e0) eastl::allocator("EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map(local_90);
        this_00 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 8);
        local_34 = 0;
        local_48 = in_RSI;
        iVar3 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
        if (0 < iVar3) {
            do {
                psVar4 = (shared_ptr*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
                    (vector<shared_ptr<Texture>, eastl::allocator>*)this_00, (long)local_34);
                new (&local_60) shared_ptr<Decor>(psVar4);
                if (operator==(&local_60, (_func_decltype_nullptr*)0)) {
                    pAVar5 = (Array<unsigned int, eastl::allocator>*)
                        eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>,
                                   eastl::allocator>::operator[]((map<int, Array<unsigned int, eastl::allocator>,
                                                                      eastl::less<int>, eastl::allocator>*)local_90,
                                                                 &local_34);
                    uVar9 = 4;
                    pAVar5->set_max_size(0, 0);
                } else {
                    ErrorCapture::ErrorCapture(local_3e0, true);
                    this_01 = (Texture*)shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                    cVar2 = this_01->Construct(*(double*)(local_48 + 64), *(int*)(local_48 + 72),
                                               *(Js5**)(local_48 + 80), local_3e0);
                    if (cVar2 == '\0') {
                        cVar2 = local_3e0->IsRaised();
                        uVar9 = 0;
                        if (cVar2 == '\0') {
                            eastl::allocator::allocator(local_50, "EASTL map");
                            eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                                       eastl::less<eastl::string>,
                                       eastl::allocator>::map((allocator*)(TextureCache*)this);
                            uVar9 = 1;
                        }
                    } else {
                        lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_60);
                        pAVar7 = (Array*)shared_ptr<Array<unsigned int, eastl::allocator>>::operator*(
                            (shared_ptr<Array<unsigned int, eastl::allocator>>*)(lVar6 + 168));
                        pAVar5 = (Array<unsigned int, eastl::allocator>*)
                            eastl::map<int, Array<unsigned int, eastl::allocator>, eastl::less<int>,
                                       eastl::allocator>::operator[]((map<int, Array<unsigned int, eastl::allocator>,
                                                                          eastl::less<int>, eastl::allocator>*)local_90,
                                                                     &local_34);
                        uVar9 = 0;
                        Array<unsigned int, eastl::allocator>::operator=(pAVar5, pAVar7);
                    }
                    local_3e0->~LanguageMessage();
                }
                local_60.~shared_ptr();
                if ((uVar9 & 3) != 0)
                    goto LAB_100303ec3;
                iVar8 = local_34 + 1;
                local_34 = iVar8;
                iVar3 = eastl::vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>::size(this_00);
            } while (iVar8 < iVar3);
        }
        uVar9 = 2;
    LAB_100303ec3:
        if (uVar9 == 2) {
            new ((TextureCache*)this)
                eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                           eastl::less<eastl::string>, eastl::allocator>(local_90);
        }
        local_90->~map();
        return (TextureCache*)this;
    }

    // 0x100303ff0, 448 bytes, placed by class name
    // TextureCache::GetTextureData(int, ErrorCapture&)
    TextureCache* TextureCache::GetTextureData(int param_1, ErrorCapture* param_2) {
        bool bVar1;
        char cVar2;
        shared_ptr* psVar4;
        long lVar5;
        long lVar6;
        Texture* pTVar7;
        ErrorCapture* in_RCX;
        undefined4 in_register_00000034;
        SharedPtrList<Texture> local_50[16];
        shared_ptr local_40;

        lVar6 = CONCAT44(in_register_00000034, param_1);
        psVar4 = (shared_ptr*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
            (vector<shared_ptr<Texture>, eastl::allocator>*)(lVar6 + 8), (long)(int)param_2);
        new (&local_40) shared_ptr<Decor>(psVar4);
        bVar1 = operator==(&local_40, (_func_decltype_nullptr*)0);
        if (bVar1) {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            lVar5 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
            bVar1 = operator!=((shared_ptr*)(lVar5 + 168), (_func_decltype_nullptr*)0);
            if (bVar1) {
                ((lVar6 + 40))->push_front(&local_40);
                lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
                *(undefined1*)(lVar6 + 184) = 1;
                lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
                new (this) shared_ptr<Decor>((shared_ptr*)(lVar6 + 168));
            } else {
                pTVar7 = (Texture*)shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
                cVar2 = pTVar7->Construct(*(double*)(lVar6 + 64), *(int*)(lVar6 + 72), *(Js5**)(lVar6 + 80), in_RCX);
                if (in_RCX->IsRaised() == '\0') {
                    if (cVar2 == '\0') {
                        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    } else {
                        if (*(int*)(lVar6 + 60) == 0) {
                            local_50->takeBackAndPop();
                            pTVar7 = (Texture*)shared_ptr<Texture>::operator->((shared_ptr<Texture>*)local_50);
                            pTVar7->Deconstruct();
                            local_50->~shared_ptr();
                        } else {
                            *(int*)(lVar6 + 60) = *(int*)(lVar6 + 60) + -1;
                        }
                        ((lVar6 + 40))->push_front(&local_40);
                        lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
                        *(undefined1*)(lVar6 + 184) = 1;
                        lVar6 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)&local_40);
                        new (this) shared_ptr<Decor>((shared_ptr*)(lVar6 + 168));
                    }
                } else {
                    new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
                }
            }
        }
        local_40.~shared_ptr();
        return this;
    }

    // 0x100304320, 96 bytes, placed by class name
    // TextureCache::GetTextureColour(int)
    undefined4 TextureCache::GetTextureColour(int param_1) {
        shared_ptr* psVar2;
        shared_ptr<Texture>* this_00;
        long lVar3;
        undefined4 uVar4;

        psVar2 = (shared_ptr*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
            (vector<shared_ptr<Texture>, eastl::allocator>*)&field_8, (long)param_1);
        uVar4 = 0;
        if (operator!=(psVar2, (_func_decltype_nullptr*)0)) {
            this_00 = (shared_ptr<Texture>*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
                (vector<shared_ptr<Texture>, eastl::allocator>*)&field_8, (long)param_1);
            lVar3 = shared_ptr<Texture>::operator->(this_00);
            uVar4 = *(undefined4*)(lVar3 + 48);
        }
        return uVar4;
    }

    // 0x100304380, 32 bytes, placed by class name
    // TextureCache::GetTextureSolid(int)
    undefined1 TextureCache::GetTextureSolid(int param_1) {
        shared_ptr<Texture>* this_00;
        long lVar1;

        this_00 = (shared_ptr<Texture>*)eastl::vector<shared_ptr<Texture>, eastl::allocator>::operator[](
            (vector<shared_ptr<Texture>, eastl::allocator>*)&field_8, (long)param_1);
        lVar1 = shared_ptr<Texture>::operator->(this_00);
        return *(undefined1*)(lVar1 + 52);
    }

    // 0x1003043a0, 16 bytes, placed by class name
    // TextureCache::GetTextureSmall(int)
    bool TextureCache::GetTextureSmall(int param_1) {
        return field_72 == 64;
    }

    // 0x1003043b0, 16 bytes, placed by class name
    // TextureCache::GetTextureCount()
    void TextureCache::GetTextureCount() {
        (&field_8)->size();
    }

    // 0x1003043c0, 144 bytes, placed by class name
    // TextureCache::RunAnims(int)
    void TextureCache::RunAnims(int param_1) {
        long lVar1;
        Texture* this_00;
        shared_ptr* psVar3;
        shared_ptr* this_01;

        this_01 = (shared_ptr*)(&field_8)->HeapBeginPtr();
        psVar3 = (shared_ptr*)(&field_8)->end();
        for (; this_01 != psVar3; this_01 = this_01 + 1) {
            if ((operator!=(this_01, (_func_decltype_nullptr*)0)) &&
                (lVar1 = shared_ptr<Texture>::operator->((shared_ptr<Texture>*)this_01), *(int*)(lVar1 + 152) != 0)) {
                this_00 = (Texture*)shared_ptr<Texture>::operator->((shared_ptr<Texture>*)this_01);
                this_00->RunAnim(param_1);
            }
        }
    }

} // namespace jag::oldscape::dash3d
