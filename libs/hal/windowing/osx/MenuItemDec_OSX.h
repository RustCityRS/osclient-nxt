// libs/hal/windowing/osx/MenuItemDec_OSX.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1003a7950
    void ref_counter_base::DecRef() {
        if (std::__atomic_base<int, true>::operator--() == 0) {
            (*this->_vptr[1]._dtor)(this);
        }
    }

    // 0x1003a7990
    void ref_counter_base::DecWRef() {
        if (std::__atomic_base<int, true>::operator--() == 0) {
            (*this->_vptr[1]._x7e___2)(this);
        }
    }

    // 0x1003a9b30
    void ref_counter_base::IncRef() {
        std::__atomic_base<int, true>::operator++();
    }

    // 0x1003a9d40
    PacketT<Array<unsigned char>>::PacketT(unsigned long arg1) : Array<unsigned char>() {
        *(uint64_t*)(this + 24) = 0;
        Reserve(this, arg1);
    }

    // 0x1003a9d80
    void PacketT<Array<unsigned char>>::swap(PacketT<Array<unsigned char>>& arg1) {
        eastl::swap<oldscape::graphics::Pix8*>(*((this + 24)), *((arg1 + 24)));
        swap(arg1);
    }

    // 0x1003a9db0
    void PacketT<Array<unsigned char>>::pT<int>(int arg1) {
        long lVar1 = *(long*)(this + 24);
        unsigned int local_1c = arg1;
        if (end() < lVar1 + 4U) {
            LogAssert("m_pos + sizeof(T) <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/Packet.inl",
                      56, nullptr);
        }
        ReorderToBE<int>(&local_1c);
        long lVar3 = data();
        lVar1 = *(long*)(this + 24);
        *(unsigned int*)(lVar3 + lVar1) = local_1c;
        *(long*)(this + 24) = lVar1 + 4;
    }

    // 0x1003a9e20
    int PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<int>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(unsigned int*)(lVar4 + lVar2);
        ReorderToBE<int>(&local_2c);
        return local_2c;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1003a9bb0
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&& arg1) {
        *(uint64_t*)this = 0;
        uint8_t* puVar1 = arg1.field_8;
        *(long*)(this + 16) = arg1.field_0;
        *(uint8_t**)(this + 24) = puVar1;
        *(void (**)(...))(this + 144) = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) = function<Window::OnClose()::$_3, void>(Window::OnClose()::$_3&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x1003a9bf0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x1003a9c00
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x1003a9c10
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* arg2) {
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(_lambda_void__jag__BaseApp___1_* this, void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
        return;
    }

    // 0x1003a9c20
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * arg2) const {
        lambda(void*, BaseApp*) #1
    }
    ::operator()(_lambda_void__jag__BaseApp___1_* this, void* arg1, BaseApp * baseApp) {
        Window::OnClose()::$_3::operator()((__3*)this, arg1);
        return;
    }

    // 0x1003a9d30
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<Window::OnClose()::$_3, void>(
        Window::OnClose()::$_3&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::math {
    // 0x1003a79e0
    Vector4T<float>::Vector4T(float arg1, float arg2, float arg3, float arg4) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg2;
        *(float*)(this + 8) = arg3;
        *(float*)(this + 12) = arg4;
    }

} // namespace jag::math
