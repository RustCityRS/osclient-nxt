// libs/graphics/runetek7/materials/textures/TextureAtlasReference.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TextureAtlasReference.h"

namespace jag::graphics {
    // 0x10017b8a0: the linker folded this into PacketT<Array<unsigned char, BucketAllocatorEASTL> >::GetSize() const, which has identical code
    TextureAtlasReference::GetTextureAtlas() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    int TextureAtlasReference::GetTextureAtlasID() const;

    // 0x10085f160, 16 bytes, complete-object destructor, placed by class name and debug map
    // TextureAtlasReference::~TextureAtlasReference(): jumps straight to the base-object destructor

    // 0x10085f320, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(shared_ptr<TextureAtlas> const&, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&): jumps straight to the base-object constructor

    // 0x10085f330, 48 bytes, placed by class name
    // TextureAtlasReference::operator=(TextureAtlasReference&&)
    /* TextureAtlasReference::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasReference&&)
    */

    TextureAtlasReference* TextureAtlasReference::operator=(TextureAtlasReference* param_1) {
        shared_ptr<TextureAtlas>::operator=((shared_ptr<TextureAtlas>*)this, (shared_ptr*)param_1);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator=(
            (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)&field_16, (vector*)&param_1->field_16);
        m_textureAtlasID = param_1->m_textureAtlasID;
        return this;
    }

    // 0x10085f990, 160 bytes, base-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(shared_ptr<TextureAtlas> const&, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&)
    void TextureAtlasReference::TextureAtlasReference(shared_ptr* param_1, vector* param_2) {
        TextRun* this_00;

        new (this) MakeSharedPool<TextureAtlasReference, 8192>();
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, param_2) eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>();
        m_textureAtlasID = -1;
        field_44 = 0;
        if (operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            this_00 = (TextRun*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
            m_textureAtlasID = this_00->GetMaxLineWidth();
        }
        AddReferences(this);
    }

    // 0x10085faa0, 64 bytes, placed by class name
    // TextureAtlasReference::AddReferences()
    void TextureAtlasReference::AddReferences() {
        TextureAtlas* this_00;

        if (operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            this_00 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
            this_00->AddReferences((vector*)&field_16);
        }
    }

    // 0x10085fae0, 112 bytes, base-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(TextureAtlasReference const&)
    void TextureAtlasReference::TextureAtlasReference(TextureAtlasReference* param_1) {
        new (this) MakeSharedPool<TextureAtlasReference, 8192>();
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        new (&field_16, (vector*)&param_1->field_16) eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>();
        m_textureAtlasID = param_1->m_textureAtlasID;
        field_44 = 0;
        AddReferences(this);
    }

    // 0x10085fb50, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(TextureAtlasReference const&): jumps straight to the base-object constructor

    // 0x10085fb60, 64 bytes, base-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(TextureAtlasReference&&)
    void TextureAtlasReference::TextureAtlasReference(TextureAtlasReference* param_1) {
        new (this) MakeSharedPool<TextureAtlasReference, 8192>();
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        new (&field_16, (vector*)&param_1->field_16) eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>();
        m_textureAtlasID = param_1->m_textureAtlasID;
        field_44 = 0;
    }

    // 0x10085fbb0, 16 bytes, complete-object constructor, placed by class name
    // TextureAtlasReference::TextureAtlasReference(TextureAtlasReference&&): jumps straight to the base-object constructor

    // 0x10085fbc0, 96 bytes, base-object destructor, placed by class name
    // TextureAtlasReference::~TextureAtlasReference()
    void TextureAtlasReference::~TextureAtlasReference() {
        TextureAtlas* this_00;

        if (operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
            this_00 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
            this_00->RemoveReferences((vector*)&field_16);
        }
        (&field_16)->~vector();
        ~shared_ptr();
    }

    // 0x10085fc20, 64 bytes, placed by class name
    // TextureAtlasReference::CheckTexturesLoaded() const
    undefined1 TextureAtlasReference::CheckTexturesLoaded() {
        TextureAtlas* this_00;
        bool bVar1;
        undefined1 uVar2;

        uVar2 = 1;
        if (field_44 == '\0') {
            bVar1 = operator==((shared_ptr*)this, (_func_decltype_nullptr*)0);
            uVar2 = 1;
            if (!bVar1) {
                this_00 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
                uVar2 = this_00->CheckMaterialsLoaded((vector*)&field_16);
            }
            field_44 = uVar2;
        }
        return uVar2;
    }

    // 0x10085fc60, 400 bytes, placed by class name
    // TextureAtlasReference::Combine(TextureAtlasReference const&)
    void TextureAtlasReference::Combine(TextureAtlasReference* param_1) {
        undefined1* this_00;
        uint in_EAX;
        int iVar2;
        long lVar3;
        ulong uVar4;
        eastl* peVar5;
        undefined8 uVar6;
        MaterialInfo* pMVar7;
        MaterialInfo* pMVar8;
        TextureAtlas* pTVar9;
        uint uVar10;
        undefined1* this_01;
        undefined8 uStack_38;

        uStack_38._0_4_ = in_EAX;
        iVar2 = param_1->GetEndPosition();
        if (m_textureAtlasID == -1) {
            if (iVar2 != -1) {
                m_textureAtlasID = iVar2;
                shared_ptr<TextureAtlas>::operator=((shared_ptr<TextureAtlas>*)this, (shared_ptr*)param_1);
                eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator=(
                    (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)&field_16, (vector*)&param_1->field_16);
                pTVar9 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->((shared_ptr<TextureAtlas>*)this);
                pTVar9->AddReferences((vector*)&field_16);
            }
        } else if (iVar2 != -1) {
            if (iVar2 == m_textureAtlasID) {
                if (operator!=((shared_ptr*)this, (_func_decltype_nullptr*)0)) {
                    this_01 = &param_1->field_16;
                    uStack_38 = (ulong)(uint)uStack_38;
                    lVar3 = this_01->size();
                    if (lVar3 != 0) {
                        this_00 = &field_16;
                        do {
                            peVar5 = (eastl*)this_00->HeapBeginPtr();
                            uVar6 = this_00->end();
                            pMVar7 = eastl::find_if<MaterialInfo*, (TextureAtlasReference_const&)->Combine()::__18>(
                                peVar5, uVar6, this_01, (long)&uStack_38 + 4);
                            pMVar8 = (MaterialInfo*)this_00->end();
                            if (pMVar7 == pMVar8) {
                                pMVar7 =
                                    (MaterialInfo*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                                        (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)this_01, uStack_38 >> 32);
                                this_00->push_back(pMVar7);
                                pTVar9 = (TextureAtlas*)shared_ptr<TextureAtlas>::operator->(
                                    (shared_ptr<TextureAtlas>*)this);
                                pMVar7 =
                                    (MaterialInfo*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
                                        (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)this_01, uStack_38 >> 32);
                                pTVar9->AddReference(pMVar7);
                            }
                            uVar10 = uStack_38._4_4_ + 1;
                            uStack_38 = CONCAT44(uVar10, (uint)uStack_38);
                            uVar4 = this_01->size();
                        } while (uVar10 < uVar4);
                    }
                }
            } else {
                uVar6 = logger::default_logger();
                logger::Logger::Log(uVar6, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/materials/textures/TextureAtlasReference.cpp",
                                    80,
                                    "TextureAtlasReference: Attempted to combine incompatible atlas references! %d %d",
                                    iVar2, m_textureAtlasID);
            }
        }
    }

    // 0x10085ff50, 96 bytes, placed by class name
    // TextureAtlasReference::GetIDsFromMaterialInfo(eastl::vector<int, BucketAllocatorEASTL>&, eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL> const&) const
    void TextureAtlasReference::GetIDsFromMaterialInfo(vector* param_1, vector* param_2) {
        ulong uVar1;
        int* piVar2;
        int* piVar3;

        uVar1 = param_2->size();
        param_1->reserve(uVar1);
        piVar2 = (int*)param_2->HeapBeginPtr();
        piVar3 = (int*)param_2->end();
        for (; piVar2 != piVar3; piVar2 = piVar2 + 7) {
            param_1->push_back(piVar2);
        }
    }

    // 0x10085ffe0, 64 bytes, placed by class name
    // TextureAtlasReference::operator=(TextureAtlasReference const&)
    /* TextureAtlasReference::TEMPNAMEPLACEHOLDERVALUE(TextureAtlasReference
   const&) */

    TextureAtlasReference* TextureAtlasReference::operator=(TextureAtlasReference* param_1) {
        shared_ptr<TextureAtlas>::operator=((shared_ptr<TextureAtlas>*)this, (shared_ptr*)param_1);
        eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator=(
            (vector<MaterialInfo, SafeBucketAllocatorEASTL>*)&field_16, (vector*)&param_1->field_16);
        m_textureAtlasID = param_1->m_textureAtlasID;
        AddReferences(this);
        return this;
    }

    // 0x1008775c0, 48 bytes, placed by class name
    // TextureAtlasReference::Combine(TextureAtlasReference const&)::$_18::operator()(MaterialInfo const&) const
    /* TextureAtlasReference::Combine(TextureAtlasReference
   const&)::$_18::TEMPNAMEPLACEHOLDERVALUE(MaterialInfo const&) const */

    bool TextureAtlasReference::Combine(TextureAtlasReference_const&)::$_18::operator()(MaterialInfo* param_1) {
        int iVar1;
        int* piVar2;

        iVar1 = param_1->field_0;
        piVar2 = (int*)eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>::operator[](
            *(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)this, (ulong) * *(uint**)(this + 8));
        return iVar1 == *piVar2;
    }

} // namespace jag::graphics
