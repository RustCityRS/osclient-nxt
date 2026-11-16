// libs/graphics/runetek7/fonts/emoji/EmojiRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics::internal {
    class VertexSetupDynamic {
    public:
        VertexSetupDynamic();
        ~VertexSetupDynamic();
        bool HasRoom(unsigned int arg1, unsigned int arg2) const;
        void OnEndFrame();
        void Destroy();

    private:
        uint8_t _unknown_0[112];
        InputAssemblerState field_112;
        uint8_t _unknown_304[160];
    };

    template <
        typename...> // 3 instantiations, e.g. <GUIManagerLineVertex>, <GUIManagerVertexBase<float> >, <GUIManagerVertexBase<short> >
    class VertexSetupRingArray {
    public:
        VertexSetupRingArray();
        ~VertexSetupRingArray();
        void OnEndFrame();
        void Destroy();
    };

    // 0x1009005d0
    VertexSetupDynamic::~VertexSetupDynamic() {
        field_456.~DynamicBuffer();
        field_424.~vector();
        field_336.~DynamicBuffer();
        field_304.~vector();
        field_112->~InputAssemblerState();
        field_16.~VertexDeclaration();
    }

    // 0x1009007f0
    VertexSetupRingArray<GUIManagerLineVertex>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
    }

    // 0x1009008d0
    VertexSetupRingArray<GUIManagerVertexBase<float>>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
    }

    // 0x1009009b0
    VertexSetupRingArray<GUIManagerVertexBase<short>>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
    }

} // namespace jag::graphics::internal

namespace jag {
    class EmojiRegistry {
    public:
        class SpriteAndIndex;
        uint8_t GetAutoChatLine() const;
        void Substitute<eastl::fixed_string<char, 512>, eastl::string>(eastl::fixed_string<char, 512>& str1,
                                                                       const eastl::string& str2) const;
        EmojiRegistry();
        unsigned long Add(const eastl::string& str, int arg2, int arg3);
        bool IsEmojiPrefix(char arg1);
        void UpdatePrefixes();
        void Remove(const eastl::string& str);
        void RemoveAll();

    private:
        pair<eastl::string, logger::LogLevel>* field_0;
        pair<eastl::string, logger::LogLevel>* field_8;
        uint8_t _unknown_16[56];
        int field_72;
        uint8_t m_autoChatLine;
        uint8_t _unknown_77[3];
    };

    class EmojiRegistry::SpriteAndIndex {
    public:
        SpriteAndIndex(int arg1, int arg2);
    };

    // 0x10045f440
    void EmojiRegistry::Substitute<eastl::fixed_string<char, 512>, eastl::basic_string<char, BucketAllocatorEASTL>>(
        eastl::fixed_string<char, 512>& str1, const eastl::basic_string<char, BucketAllocatorEASTL>& str2) const {
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00;
        int iVar2;
        int iVar3;
        char* pcVar4;
        unsigned long uVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* pbVar8;
        int iVar9;
        bool bVar10;
        fixed_string<char, 256> local_160;

        char cVar1 = empty();
        if (!cVar1) {
            iVar2 = str2.size();
            str1.reserve((long)iVar2);
            if (0 < iVar2) {
                bVar10 = false;
                iVar9 = 0;
                do {
                    pcVar4 = &str2[(long)iVar9];
                    cVar1 = *pcVar4;
                    if (bVar10) {
                        if (cVar1 == '>') {
                            bVar10 = false;
                        }
                    } else if (cVar1 == '<') {
                        bVar10 = true;
                    } else {
                        if (field_40.find(cVar1, 0) != -1) {
                            pbVar7 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)
                                HeapBeginPtr();
                            pbVar8 =
                                (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)end();
                            while (this_00 = pbVar7, this_00 != pbVar8) {
                                iVar3 = this_00->size();
                                pbVar7 = this_00 + 40;
                                if (iVar9 <= iVar2 - iVar3) {
                                    pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    uVar5 = this_00->size();
                                    iVar3 = str2.compare((long)iVar9, (long)iVar3, pcVar4, uVar5);
                                    if (iVar3 == 0) {
                                        local_160 = eastl::fixed_string<char, 256>();
                                        if (*(int*)(this_00 + 36) < 1) {
                                            local_160.sprintf("<sprite=%d>",
                                                              (unsigned long)*(unsigned int*)(this_00 + 32));
                                        } else {
                                            local_160.sprintf("<sprite=%d,%d>",
                                                              (unsigned long)*(unsigned int*)(this_00 + 32));
                                        }
                                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        uVar5 = local_160.size();
                                        str1.append(pcVar4, uVar5);
                                    }
                                }
                            }
                        }
                    }
                    str1 += cVar1;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < iVar2);
            }
        } else {
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = str2.size();
            str1.assign(pcVar4, uVar5);
        }
    }

    // 0x1008ea970
    bool EmojiRegistry::IsEmojiPrefix(char arg1) {
        bool bVar1 = true;
        if (14 < (uint8_t)(arg1 - 33U)) {
            bVar1 = ('z' < arg1 || (uint8_t)(arg1 + 165U) < 5) || arg1 != '<' && (uint8_t)(arg1 - 58U) < 7;
        }
        return bVar1;
    }

} // namespace jag

namespace jag::graphics {
    class ClippingState {
    public:
        ClippingState(RT7Core* rt7Core);
        ~ClippingState();

    private:
        RT7Core* field_0;
        ClippingRectangle field_8;
    };

    // 0x100900bb0
    ClippingState::ClippingState(RT7Core* rt7Core) : field_0(rt7Core) {
        auto puVar2 = rt7Core->GetPixelBuffer();
        uint64_t uVar1 = puVar2[1];
        *(uint64_t*)field_8 = *puVar2;
        *(uint64_t*)(field_8 + 8) = uVar1;
    }

    // 0x100900be0
    ClippingState::~ClippingState() {
        field_0->SetClippingRectangle(*(int*)field_8, *(int*)(field_8 + 4), *(int*)(field_8 + 8) - *(int*)field_8,
                                      *(int*)(field_8 + 12) - *(int*)(field_8 + 4), true);
    }

} // namespace jag::graphics
