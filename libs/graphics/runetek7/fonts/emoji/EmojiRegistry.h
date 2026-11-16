// libs/graphics/runetek7/fonts/emoji/EmojiRegistry.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::internal {
    class VertexSetupDynamic {
    public:
        VertexSetupDynamic();
        ~VertexSetupDynamic();
        bool HasRoom(unsigned int, unsigned int) const;
        void OnEndFrame();
        void Destroy();

        // data members, from how the methods use this: 464 bytes
        char _unknown_0[112];
        InputAssemblerState field_112; // offset 112
        char _unknown_304[160];
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

    // 0x1008eadd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::VertexSetupRingArray(): jumps straight to the base-object constructor

    // 0x1008eade0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<float> >::VertexSetupRingArray(): jumps straight to the base-object constructor

    // 0x1008eadf0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerLineVertex>::VertexSetupRingArray(): jumps straight to the base-object constructor

    // 0x1008eae00, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // VertexSetupDynamic::VertexSetupDynamic(): jumps straight to the base-object constructor

    // 0x1008eaea0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // VertexSetupDynamic::~VertexSetupDynamic(): jumps straight to the base-object destructor

    // 0x1008eaeb0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerLineVertex>::~VertexSetupRingArray(): jumps straight to the base-object destructor

    // 0x1008eaec0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<float> >::~VertexSetupRingArray(): jumps straight to the base-object destructor

    // 0x1008eaed0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::~VertexSetupRingArray(): jumps straight to the base-object destructor

    // 0x1009005d0, 96 bytes, base-object destructor, inline, placed by class header (inline)
    // VertexSetupDynamic::~VertexSetupDynamic()
    void VertexSetupDynamic::~VertexSetupDynamic() {
        (&field_456)->~DynamicBuffer();
        (&field_424)->~vector();
        (&field_336)->~DynamicBuffer();
        (&field_304)->~vector();
        field_112->~InputAssemblerState();
        (&field_16)->~VertexDeclaration();
        ~shared_ptr();
    }

    // 0x1009007f0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerLineVertex>::~VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerLineVertex>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
        ~shared_ptr();
    }

    // 0x1009008d0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<float> >::~VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerVertexBase<float>>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
        ~shared_ptr();
    }

    // 0x1009009b0, 80 bytes, base-object destructor, inline, placed by class header (inline)
    // VertexSetupRingArray<GUIManagerVertexBase<short> >::~VertexSetupRingArray()
    void VertexSetupRingArray<GUIManagerVertexBase<short>>::~VertexSetupRingArray() {
        ((this + 320))->~InputAssemblerState();
        ((this + 232))->~IndexBuffer();
        ((this + 144))->~DynamicBuffer();
        ((this + 112))->~Array();
        ((this + 16))->~VertexDeclaration();
        ~shared_ptr();
    }

} // namespace jag::graphics::internal

namespace jag::graphics {
    class ClippingState {
    public:
        ClippingState(RT7Core*);
        ~ClippingState();

        // data members, from how the methods use this: 28 bytes
        RT7Core* field_0;          // offset 0
        ClippingRectangle field_8; // offset 8
    };

    // 0x1008ee6d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ClippingState::ClippingState(RT7Core*): jumps straight to the base-object constructor

    // 0x1008ee9a0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // ClippingState::~ClippingState(): jumps straight to the base-object destructor

    // 0x100900bb0, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // ClippingState::ClippingState(RT7Core*)
    void ClippingState::ClippingState(RT7Core* param_1) {
        undefined8 uVar1;
        undefined8* puVar2;

        field_0 = param_1;
        new (field_8) ClippingRectangle();
        puVar2 = (undefined8*)param_1->GetPixelBuffer();
        uVar1 = puVar2[1];
        *(undefined8*)field_8 = *puVar2;
        *(undefined8*)(field_8 + 8) = uVar1;
    }

    // 0x100900be0, 48 bytes, base-object destructor, inline, placed by class header (inline)
    // ClippingState::~ClippingState()
    void ClippingState::~ClippingState() {
        (field_0, *(int*)field_8, *(int*)(field_8 + 4), *(int*)(field_8 + 8) - *(int*)field_8,
         *(int*)(field_8 + 12) - *(int*)(field_8 + 4), true)
            ->SetClippingRectangle();
    }

} // namespace jag::graphics

namespace jag {
    class EmojiRegistry {
    public:
        class SpriteAndIndex;
        GetAutoChatLine() const;
        void Substitute<eastl::fixed_string<char, 512, true, eastl::allocator>,
                        eastl::basic_string<char, BucketAllocatorEASTL>>(
            eastl::fixed_string<char, 512, true, eastl::allocator>&,
            eastl::basic_string<char, BucketAllocatorEASTL> const&) const;
        EmojiRegistry();
        ulong Add(eastl::string const&, int, int);
        bool IsEmojiPrefix(char);
        void UpdatePrefixes();
        void Remove(eastl::string const&);
        void RemoveAll();

        // data members, from how the methods use this: 80 bytes
        pair* field_0; // offset 0
        pair* field_8; // offset 8
        char _unknown_16[56];
        int field_72;        // offset 72
        undefined1 field_76; // offset 76
        char _unknown_77[3];
    };

    class EmojiRegistry::SpriteAndIndex {
    public:
        SpriteAndIndex(int, int);
    };

    // 0x10045f440, 768 bytes, inline, placed by class name and debug map
    // void EmojiRegistry::Substitute<eastl::fixed_string<char, 512, true, eastl::allocator>, eastl::basic_string<char, BucketAllocatorEASTL> >(eastl::fixed_string<char, 512, true, eastl::allocator>&, eastl::basic_string<char, BucketAllocatorEASTL> const&) const
    void EmojiRegistry::Substitute<eastl::fixed_string<char, 512, true, eastl::allocator>,
                                   eastl::basic_string<char, BucketAllocatorEASTL>>(fixed_string* param_1,
                                                                                    basic_string* param_2) {
        long lVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        char* pcVar5;
        ulong uVar6;
        long lVar7;
        long lVar8;
        int iVar9;
        bool bVar10;
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = empty();
        if (cVar2 == '\0') {
            iVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            param_1->reserve((long)iVar3);
            if (0 < iVar3) {
                bVar10 = false;
                iVar9 = 0;
                do {
                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::operator[](
                        (basic_string<char, BucketAllocatorEASTL>*)param_2, (long)iVar9);
                    cVar2 = *pcVar5;
                    if (bVar10) {
                        if (cVar2 == '>') {
                            bVar10 = false;
                        }
                    } else if (cVar2 == '<') {
                        bVar10 = true;
                    } else {
                        lVar7 = (&field_40, cVar2, 0)->find();
                        if (lVar7 != -1) {
                            lVar7 = HeapBeginPtr();
                            lVar8 = end();
                            while (lVar1 = lVar7, lVar1 != lVar8) {
                                iVar4 =
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                lVar7 = lVar1 + 40;
                                if (iVar9 <= iVar3 - iVar4) {
                                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    uVar6 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                    iVar4 = param_2->compare((long)iVar9, (long)iVar4, pcVar5, uVar6);
                                    if (iVar4 == 0) {
                                        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
                                        if (*(int*)(lVar1 + 36) < 1) {
                                            eastl::basic_string<char,
                                                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                                sprintf((char*)local_160, "<sprite=%d>", (ulong) * (uint*)(lVar1 + 32));
                                        } else {
                                            eastl::basic_string<char,
                                                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                                sprintf((char*)local_160, "<sprite=%d,%d>",
                                                        (ulong) * (uint*)(lVar1 + 32));
                                        }
                                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        uVar6 = eastl::basic_string<
                                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::size();
                                        param_1->append(pcVar5, uVar6);
                                        /* WARNING: Subroutine does not return */
                                        local_160->~fixed_string();
                                    }
                                }
                            }
                        }
                    }
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                    operator+=(
                        (basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)param_1,
                        cVar2);
                    iVar9 = iVar9 + 1;
                } while (iVar9 < iVar3);
            }
        } else {
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            param_1->assign(pcVar5, uVar6);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ea970, 64 bytes, inline, placed by class name
    // EmojiRegistry::IsEmojiPrefix(char)
    bool EmojiRegistry::IsEmojiPrefix(char param_1) {
        bool bVar1;

        bVar1 = true;
        if (14 < (byte)(param_1 - 33U)) {
            bVar1 = ('z' < param_1 || (byte)(param_1 + 165U) < 5) || param_1 != '<' && (byte)(param_1 - 58U) < 7;
        }
        return bVar1;
    }

} // namespace jag
