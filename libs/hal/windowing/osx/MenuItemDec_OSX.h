// libs/hal/windowing/osx/MenuItemDec_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1003a7950, 48 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::DecRef()
    void ref_counter_base::DecRef() {
        if (std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_8) == 0) {
            (**(code**)(field_0 + 16))(this);
            DecWRef(this);
        }
    }

    // 0x1003a7990, 48 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::DecWRef()
    void ref_counter_base::DecWRef() {
        if (std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)&field_12) == 0) {
            (**(code**)(field_0 + 24))(this);
        }
    }

    // 0x1003a9b30, 16 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_base::IncRef()
    void ref_counter_base::IncRef() {
        std::__atomic_base<int, true>::operator++((__atomic_base<int, true>*)&field_8);
    }

    // 0x1003a9d40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT(unsigned long)
    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  ulong param_1) {
        new (this) Array<unsigned char, eastl::allocator>();
        *(undefined8*)(this + 24) = 0;
        Reserve(this, param_1);
    }

    // 0x1003a9d80, 48 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::swap(PacketT<Array<unsigned char, eastl::allocator> >&)
    void PacketT<Array<unsigned char, eastl::allocator>>::swap(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               PacketT* param_1) {
        eastl::swap<oldscape::graphics::Pix8*>((Pix8**)(this + 24), (Pix8**)(param_1 + 24));
        swap(param_1);
    }

    // 0x1003a9db0, 112 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::pT<int>(int)
    void PacketT<Array<unsigned char, eastl::allocator>>::pT<int>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  int param_1) {
        long lVar1;
        ulong uVar2;
        long lVar3;
        int local_1c;

        lVar1 = *(long*)(this + 24);
        local_1c = param_1;
        uVar2 = end();
        if (uVar2 < lVar1 + 4U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, (char*)0);
        }
        ReorderToBE<int>(&local_1c);
        lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(int*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1003a9e20, 144 bytes, inline, placed by debug map only (low confidence)
    // int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<int>()
    int PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<int>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        int local_2c;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1003a9bb0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::__3, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __3* param_1) {
        undefined1* puVar1;

        *(undefined8*)this = 0;
        puVar1 = param_1->field_8;
        *(long*)(this + 16) = param_1->field_0;
        *(undefined1**)(this + 24) = puVar1;
        *(code**)(this + 144) = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1003a9bf0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1003a9c00, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<Window::OnClose()::$_3,
   void>(Window::OnClose()::$_3&&)::{lambda(void*, void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*,
   void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)((long)param_1 + 8);
        *(undefined8*)param_2 = *(undefined8*)param_1;
        *(undefined8*)((long)param_2 + 8) = uVar1;
    }

    // 0x1003a9c10, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x1003a9c20, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<Window::OnClose()::$_3,
   void>(Window::OnClose()::$_3&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        Window::OnClose()::$_3::operator()(param_1, param_2);
    }

    // 0x1003a9d30, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x1003a79e0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Vector4T<float>::Vector4T(float, float, float, float)
    /* Rect<float>::Set(float, float, float, float) */

    void Rect<float>::Set(float param_1, float param_2, float param_3, float param_4) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_2;
        *(float*)(this + 8) = param_3;
        *(float*)(this + 12) = param_4;
    }

} // namespace jag::math
