// libs/graphics/runetek7/materials/textures/TextureAtlasReference.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TextureAtlasReference.h"

namespace jag::graphics {
    // 0x10017b8a0: TextureAtlasReference::GetTextureAtlas() const has the same machine code as PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetSize() const

    // 0x100293ee0: TextureAtlasReference::GetTextureAtlasID() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x10085f330
    TextureAtlasReference* TextureAtlasReference::operator=(TextureAtlasReference&& textureAtlasReference) {
        *this = textureAtlasReference;
        field_16 = textureAtlasReference.field_16;
        m_textureAtlasID = textureAtlasReference.m_textureAtlasID;
        return this;
    }

    // 0x10085f990
    TextureAtlasReference::TextureAtlasReference(
        const shared_ptr<TextureAtlas>& textureAtlas,
        const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos)
        : MakeSharedPool<TextureAtlasReference, 8192>(), shared_ptr(textureAtlas), field_16(materialInfos),
          m_textureAtlasID(4294967295), field_44(0) {
        if (*this != nullptr) {
            m_textureAtlasID = ((TextRun*)(*this).operator->())->GetMaxLineWidth();
        }
        AddReferences();
    }

    // 0x10085faa0
    void TextureAtlasReference::AddReferences() {
        if (*this != nullptr) {
            ((TextureAtlas*)(*this).operator->())->AddReferences(field_16);
        }
    }

    // 0x10085fae0
    TextureAtlasReference::TextureAtlasReference(const TextureAtlasReference& textureAtlasReference)
        : MakeSharedPool<TextureAtlasReference, 8192>(), shared_ptr(textureAtlasReference),
          field_16(textureAtlasReference.field_16), m_textureAtlasID(textureAtlasReference.m_textureAtlasID),
          field_44(0) {
        AddReferences();
    }

    // 0x10085fb60
    TextureAtlasReference::TextureAtlasReference(TextureAtlasReference&& textureAtlasReference)
        : MakeSharedPool<TextureAtlasReference, 8192>() {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(textureAtlasReference);
        new (&field_16) eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>(textureAtlasReference.field_16);
        m_textureAtlasID = textureAtlasReference.m_textureAtlasID;
        field_44 = 0;
    }

    // 0x10085fbc0
    TextureAtlasReference::~TextureAtlasReference() {
        if (*this != nullptr) {
            ((TextureAtlas*)(*this).operator->())->RemoveReferences(field_16);
        }
        field_16.~vector();
    }

    // 0x10085fc20
    uint8_t TextureAtlasReference::CheckTexturesLoaded() const {
        bool bVar1;

        uint8_t uVar2 = 1;
        if (field_44 == '\0') {
            bVar1 = *this == nullptr;
            uVar2 = 1;
            if (!bVar1) {
                uVar2 = ((TextureAtlas*)(*this).operator->())->CheckMaterialsLoaded(field_16);
            }
            field_44 = uVar2;
        }
        return uVar2;
    }

    // 0x10085fc60
    void TextureAtlasReference::Combine(const TextureAtlasReference& textureAtlasReference) {
        uint8_t* this_00;
        unsigned long uVar4;
        MaterialInfo* pMVar5;
        MaterialInfo* pMVar6;
        TextureAtlas* pTVar7;
        uint8_t* this_02;
        unsigned int local_34;

        unsigned int uVar2 = textureAtlasReference.GetEndPosition();
        if (m_textureAtlasID == 4294967295) {
            if (uVar2 != 4294967295) {
                m_textureAtlasID = uVar2;
                *this = textureAtlasReference;
                field_16 = textureAtlasReference.field_16;
                pTVar7 = (TextureAtlas*)(*this).operator->();
                pTVar7->AddReferences(field_16);
            }
        } else if (uVar2 != 4294967295) {
            if (uVar2 == m_textureAtlasID) {
                if (*this != nullptr) {
                    this_02 = &textureAtlasReference.field_16;
                    local_34 = 0;
                    if (this_02->size() != 0) {
                        this_00 = &field_16;
                        do {
                            pMVar5 = (MaterialInfo*)this_00->HeapBeginPtr();
                            pMVar6 = (MaterialInfo*)this_00->end();
                            pMVar5 = eastl::find_if<MaterialInfo*, (TextureAtlasReference const&)->Combine()::__18>(
                                pMVar5, pMVar6, (__18*)this_02);
                            pMVar6 = (MaterialInfo*)this_00->end();
                            if (pMVar5 == pMVar6) {
                                pMVar5 = (MaterialInfo*)(*this_02)[(unsigned long)local_34];
                                this_00->push_back(*pMVar5);
                                pTVar7 = (TextureAtlas*)(*this).operator->();
                                pMVar5 = (MaterialInfo*)(*this_02)[(unsigned long)local_34];
                                pTVar7->AddReference(*pMVar5);
                            }
                            local_34 = local_34 + 1;
                            uVar4 = this_02->size();
                        } while (local_34 < uVar4);
                    }
                }
            } else {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "materials/textures/TextureAtlasReference.cpp",
                          80, "TextureAtlasReference: Attempted to combine incompatible atlas references! %d %d",
                          (unsigned long)uVar2, (unsigned long)m_textureAtlasID);
            }
        }
    }

    // 0x10085ff50
    void TextureAtlasReference::GetIDsFromMaterialInfo(
        eastl::vector<int, BucketAllocatorEASTL>& arg1,
        const eastl::vector<MaterialInfo, SafeBucketAllocatorEASTL>& materialInfos) const {
        arg1.reserve(materialInfos.size());
        auto arg1_01 = materialInfos.HeapBeginPtr();
        auto piVar1 = materialInfos.end();
        for (; arg1_01 != piVar1; arg1_01 = arg1_01 + 7) {
            arg1.push_back(*arg1_01);
        }
    }

    // 0x10085ffe0
    TextureAtlasReference* TextureAtlasReference::operator=(const TextureAtlasReference& textureAtlasReference) {
        *this = textureAtlasReference;
        field_16 = textureAtlasReference.field_16;
        m_textureAtlasID = textureAtlasReference.m_textureAtlasID;
        AddReferences();
        return this;
    }

    // 0x1008775c0
    bool TextureAtlasReference::Combine(TextureAtlasReference const&)::$_18::operator()(
        const MaterialInfo& materialInfo) const {
        int iVar1 = materialInfo.field_0;
        int* piVar2 = (int*)(*(
            *(vector<MaterialInfo, SafeBucketAllocatorEASTL>**)this))[(unsigned long)**(unsigned int**)(this + 8)];
        return iVar1 == *piVar2;
    }

} // namespace jag::graphics
