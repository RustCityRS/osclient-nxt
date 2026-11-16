// libs/oldscape/rs2lib/util/HttpSpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10021da50
    oldscape::rs2lib::InterfaceGraphicMask*
    placement_new<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int>, Array<int>, int const&>(
        void* arg1, const int& arg2, const int& arg3, Array<int>&& arg4, Array<int>&& arg5, const int& arg6) {
        new (arg1) oldscape::rs2lib::InterfaceGraphicMask(arg2, arg3, arg4, arg5, arg6);
        return arg1;
    }

    // 0x10021da70
    ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>*
    placement_new<ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>, int,
                  oldscape::rs2lib::InterfaceGraphicMask*&>(void* arg1, int&& arg2,
                                                            oldscape::rs2lib::InterfaceGraphicMask*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10021daf0
    ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::InterfaceGraphicMask* interfaceGraphicMask)
        : ref_counter_base() {}

    // 0x10021db30
    void ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((InterfaceGraphicMask*)((long)&(this[3]._vptr)->_dtor + lVar2))->~InterfaceGraphicMask();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10021e8f0
    oldscape::rs2lib::HttpSpriteData*
    placement_new<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(void* arg1, http::HTTPRequest& httpRequest) {
        new (arg1) oldscape::rs2lib::HttpSpriteData(httpRequest);
        return arg1;
    }

    // 0x10021fed0
    int* placement_new<int, int&>(void* arg1, int& arg2) {
        *(int*)arg1 = arg2;
        return arg1;
    }

    // 0x10021fee0
    ref_counter_shared_trivial<int>* placement_new<ref_counter_shared_trivial<int>, int, int*&>(void* arg1, int&& arg2,
                                                                                                int*& arg3) {
        new (arg1) ref_counter_shared_trivial<int>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10021ff10
    ref_counter_shared_trivial<int>::ref_counter_shared_trivial(unsigned long arg1, int* arg2) : ref_counter_base() {}

    // 0x1002240a0
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart1or2() {
        uint8_t* pbVar2 = (uint8_t*)(*this)[*(unsigned long*)(this + 24)];
        unsigned short uVar1 = (unsigned short)*pbVar2;
        if ((char)*pbVar2 < '\0') {
            uVar1 = g2(this);
            uVar1 = uVar1 ^ 32768;
        } else {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
        }
        return uVar1;
    }

    // 0x100224640
    shared_ptr_if_array<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>::type
    make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>(unsigned long arg1) {
        void* arg1_00;
        unsigned long uVar1;
        long lVar2;
        unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                   std::default_delete<oldscape::rs2lib::worldmap::LocationData> _>* local_38[2];

        unsigned long local_40 = arg1;
        if ((arg1 == 0) || (arg1_00 = (void*)aligned_alloc(arg1 * 8 + 32, 8), arg1_00 == nullptr)) {
            return shared_ptr_if_array<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>::type();
        }
        local_38[0] =
            (unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                        std::default_delete<oldscape::rs2lib::worldmap::LocationData> _>*)((long)arg1_00 + 32);
        if (local_40 != 0) {
            lVar2 = 0;
            uVar1 = 0;
            do {
                placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>(local_38[0] + lVar2);
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 8;
            } while (uVar1 < local_40);
        }
        auto fastPool =
            placement_new<ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>, unsigned long&,
                          std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>*&>(arg1_00, &local_40, local_38);
        new (&result) eastl::hashtable_iterator(fastPool, (unsigned long)local_38[0]);
        return result;
    }

    // 0x1002246f0
    std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>*
    placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>(void* arg1) {
        arg1->unique_ptr<true, void>();
        return arg1;
    }

    // 0x100224710
    ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>*
    placement_new<ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>, unsigned long&,
                  std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>*&>(
        void* arg1, unsigned long& arg2, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>*& arg3) {
        new (arg1) ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>(arg2, arg3);
        return arg1;
    }

    // 0x1002247a0
    ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>::ref_counter_shared(
        unsigned long arg1, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>* locationData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7988 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                     std::default_delete<oldscape::rs2lib::worldmap::LocationData> _>**)(this + 24) = locationData;
    }

    // 0x1002247e0
    void ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((unique_ptr<oldscape::rs2lib::worldmap::LocationData>*)(*(long*)(this + 24) + lVar2))
                        ->~unique_ptr();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 8;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100224f10
    oldscape::graphics::Pix32* placement_new<oldscape::graphics::Pix32, int, int>(void* arg1, int&& arg2, int&& arg3) {
        new (arg1) oldscape::graphics::Pix32(arg2, arg3);
        return arg1;
    }

    // 0x100224f30
    ref_counter_shared<oldscape::graphics::Pix32>*
    placement_new<ref_counter_shared<oldscape::graphics::Pix32>, int, oldscape::graphics::Pix32*&>(
        void* arg1, int&& arg2, oldscape::graphics::Pix32*& arg3) {
        new (arg1) ref_counter_shared<oldscape::graphics::Pix32>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100224f60
    ref_counter_shared<oldscape::graphics::Pix32>::ref_counter_shared(unsigned long arg1,
                                                                      oldscape::graphics::Pix32* pix32)
        : ref_counter_base() {}

    // 0x100224fa0
    void ref_counter_shared<oldscape::graphics::Pix32>::DeleteData() {
        ref_counter_shared<oldscape::graphics::Pix32> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((BlendedGround*)((long)&(this[3]._vptr)->_dtor + lVar2))->~BlendedGround();
                    prVar1 = (ref_counter_shared<oldscape::graphics::Pix32> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::rs2lib {
    class HttpSpriteData {
    public:
        void GetSprite() const;
        HttpSpriteData(const eastl::string& str);
        HttpSpriteData(std::unique_ptr<http::HTTPRequest>&& httpRequest);
        HttpSpriteData(const http::HTTPRequest& httpRequest);
        uint8_t* ServiceRequest(const http::HTTPRequest& httpRequest);
        uint8_t* Service();
        ~HttpSpriteData();

    private:
        uint8_t _unknown_0[8];
        shared_ptr field_8;
    };

    // 0x10021d3c0
    HttpSpriteData::~HttpSpriteData() {
        field_8->~shared_ptr();
        ~unique_ptr();
    }

    // 0x10021daa0
    InterfaceGraphicMask::InterfaceGraphicMask(int arg1, int arg2, Array<int>&& arg3, Array<int>&& arg4, int arg5)
        : field_0(arg1), field_4(arg2), field_8(arg3), field_32(arg4), field_56(arg5) {}

    // 0x10021db90
    InterfaceGraphicMask::~InterfaceGraphicMask() {
        field_32.~Array();
        field_8.~Array();
    }

    // 0x10021e930
    InputFieldWrapper::InputFieldWrapper() : InputField() {}

} // namespace jag::oldscape::rs2lib
