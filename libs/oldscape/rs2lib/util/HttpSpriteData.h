// libs/oldscape/rs2lib/util/HttpSpriteData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10021da50, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::InterfaceGraphicMask* placement_new<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int, eastl::allocator>, Array<int, eastl::allocator>, int const&>(void*, int const&, int const&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, int const&)
    InterfaceGraphicMask*
    jag::placement_new<oldscape::rs2lib::InterfaceGraphicMask, int const&, int const&, Array<int, eastl::allocator>,
                       Array<int, eastl::allocator>, int const&>(void* param_1, int* param_2, int* param_3,
                                                                 Array* param_4, Array* param_5, int* param_6) {
        oldscape::rs2lib::InterfaceGraphicMask::InterfaceGraphicMask(param_1, *param_2, *param_3, param_4, param_5,
                                                                     *param_6);
        return param_1;
    }

    // 0x10021da70, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>* placement_new<ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>, int, oldscape::rs2lib::InterfaceGraphicMask*&>(void*, int&&, oldscape::rs2lib::InterfaceGraphicMask*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>, int,
                                           oldscape::rs2lib::InterfaceGraphicMask*&>(void* param_1, int* param_2,
                                                                                     InterfaceGraphicMask** param_3) {
        ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::ref_counter_shared(param_1, (long)*param_2,
                                                                                       *param_3);
        return param_1;
    }

    // 0x10021dae0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::ref_counter_shared(unsigned long, oldscape::rs2lib::InterfaceGraphicMask*): jumps straight to the base-object constructor

    // 0x10021daf0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::ref_counter_shared(unsigned long, oldscape::rs2lib::InterfaceGraphicMask*)
    void ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::ref_counter_shared(ulong param_1,
                                                                                        InterfaceGraphicMask* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7820 + 16;
        *(ulong*)(this + 16) = param_1;
        *(InterfaceGraphicMask**)(this + 24) = param_2;
    }

    // 0x10021db30, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::InterfaceGraphicMask>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~InterfaceGraphicMask();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10021e8f0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::HttpSpriteData* placement_new<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(void*, http::HTTPRequest&)
    HttpSpriteData* placement_new<oldscape::rs2lib::HttpSpriteData, http::HTTPRequest&>(void* param_1,
                                                                                        HTTPRequest* param_2) {
        oldscape::rs2lib::HttpSpriteData::HttpSpriteData(param_1, param_2);
        return param_1;
    }

    // 0x10021fed0, 16 bytes, inline, placed by debug map only (low confidence)
    // int* placement_new<int, int&>(void*, int&)
    int* placement_new<int, int&>(void* param_1, int* param_2) {
        *(int*)param_1 = *param_2;
        return param_1;
    }

    // 0x10021fee0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<int>* placement_new<ref_counter_shared_trivial<int>, int, int*&>(void*, int&&, int*&)
    ref_counter_shared_trivial* placement_new<ref_counter_shared_trivial<int>, int, int*&>(void* param_1, int* param_2,
                                                                                           int** param_3) {
        ref_counter_shared_trivial<int>::ref_counter_shared_trivial(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10021ff00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<int>::ref_counter_shared_trivial(unsigned long, int*): jumps straight to the base-object constructor

    // 0x10021ff10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<int>::ref_counter_shared_trivial(unsigned long, int*)
    void ref_counter_shared_trivial<int>::ref_counter_shared_trivial(ulong param_1, int* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d68 + 16;
    }

    // 0x1002240a0, 64 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart1or2()
    ushort PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart1or2(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ushort uVar1;
        byte* pbVar2;

        pbVar2 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, *(ulong*)(this + 24));
        uVar1 = (ushort)*pbVar2;
        if ((char)*pbVar2 < '\0') {
            uVar1 = g2(this);
            uVar1 = uVar1 ^ 32768;
        } else {
            *(long*)(this + 24) = *(long*)(this + 24) + 1;
        }
        return uVar1;
    }

    // 0x100224640, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_array<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > []>::type make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > []>(unsigned long)
    /* shared_ptr_if_array<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > []>::type
   make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > []>(unsigned long) */

    jag*
    jag::make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                     std::default_delete<oldscape::rs2lib::worldmap::LocationData>>[]>(ulong param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        ulong uVar3;
        _func_decltype_nullptr* p_Var4;
        long lVar5;
        ulong local_40;
        unique_ptr* local_38[2];

        p_Var4 = (_func_decltype_nullptr*)0;
        local_40 = param_1;
        if (param_1 != 0) {
            p_Var4 = (_func_decltype_nullptr*)8;
            pvVar1 = (void*)aligned_alloc(param_1 * 8 + 32, 8);
            if (pvVar1 != (void*)0) {
                local_38[0] = (unique_ptr*)((long)pvVar1 + 32);
                if (local_40 != 0) {
                    lVar5 = 0;
                    uVar3 = 0;
                    do {
                        placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                      std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>(
                            local_38[0] + lVar5);
                        uVar3 = uVar3 + 1;
                        lVar5 = lVar5 + 8;
                    } while (uVar3 < local_40);
                }
                prVar2 = placement_new<
                    ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                       std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>,
                    unsigned long&,
                    std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>*&>(pvVar1, &local_40,
                                                                                                      local_38);
                new (this)
                    eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
                return this;
            }
        }
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var4);
        return this;
    }

    // 0x1002246f0, 32 bytes, inline, placed by debug map only (low confidence)
    // std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >* placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >>(void*)
    /* std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*
   placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >>(void*) */

    unique_ptr*
    jag::placement_new<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                       std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>(void* param_1) {
        std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                        std::default_delete<oldscape::rs2lib::worldmap::LocationData>>::unique_ptr<true, void>(param_1);
        return param_1;
    }

    // 0x100224710, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >* placement_new<ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >, unsigned long&, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*&>(void*, unsigned long&, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*&)
    /* ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >*
   placement_new<ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >, unsigned long&,
   std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*&>(void*, unsigned long&,
   std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*&) */

    ref_counter_shared* jag::placement_new<
        ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                           std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>,
        unsigned long&,
        std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                        std::default_delete<oldscape::rs2lib::worldmap::LocationData>>*&>(void* param_1, ulong* param_2,
                                                                                          unique_ptr** param_3) {
        ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                           std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
            ref_counter_shared(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100224790, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::ref_counter_shared(unsigned long, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*): jumps straight to the base-object constructor

    // 0x1002247a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::ref_counter_shared(unsigned long, std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*)
    /* ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >
   >::ref_counter_shared(unsigned long,
   std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >*) */

    void jag::ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                 std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
        ref_counter_shared(
            ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                               std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this,
            ulong param_1, unique_ptr* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7988 + 16;
        *(ulong*)(this + 16) = param_1;
        *(unique_ptr**)(this + 24) = param_2;
    }

    // 0x1002247e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::DeleteData()
    /* ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::DeleteData() */

    void jag::ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                 std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
        DeleteData(
            ref_counter_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                               std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~unique_ptr();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 8;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100224f10, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::graphics::Pix32* placement_new<oldscape::graphics::Pix32, int, int>(void*, int&&, int&&)
    /* oldscape::graphics::Pix32* placement_new<oldscape::graphics::Pix32, int&,
   int&>(void*, int&, int&) */

    Pix32* placement_new<oldscape::graphics::Pix32, int&, int&>(void* param_1, int* param_2, int* param_3) {
        oldscape::graphics::Pix32::Pix32(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100224f30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::Pix32>* placement_new<ref_counter_shared<oldscape::graphics::Pix32>, int, oldscape::graphics::Pix32*&>(void*, int&&, oldscape::graphics::Pix32*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::graphics::Pix32>, int, oldscape::graphics::Pix32*&>(
        void* param_1, int* param_2, Pix32** param_3) {
        ref_counter_shared<oldscape::graphics::Pix32>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100224f50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::Pix32>::ref_counter_shared(unsigned long, oldscape::graphics::Pix32*): jumps straight to the base-object constructor

    // 0x100224f60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::Pix32>::ref_counter_shared(unsigned long, oldscape::graphics::Pix32*)
    void ref_counter_shared<oldscape::graphics::Pix32>::ref_counter_shared(ulong param_1, Pix32* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7948 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Pix32**)(this + 24) = param_2;
    }

    // 0x100224fa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::Pix32>::DeleteData()
    void ref_counter_shared<oldscape::graphics::Pix32>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~BlendedGround();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::rs2lib {
    class HttpSpriteData {
    public:
        GetSprite() const;
        HttpSpriteData(eastl::string const&);
        HttpSpriteData(std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>&&);
        HttpSpriteData(http::HTTPRequest const&);
        ServiceRequest(http::HTTPRequest const&);
        Service();
        ~HttpSpriteData();

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[8];
        shared_ptr field_8; // offset 8
    };

    // 0x10021d3b0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HttpSpriteData::~HttpSpriteData(): jumps straight to the base-object destructor

    // 0x10021d3c0, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // HttpSpriteData::~HttpSpriteData()
    void HttpSpriteData::~HttpSpriteData() {
        field_8->~shared_ptr();
        ~unique_ptr();
    }

    // 0x10021da90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceGraphicMask::InterfaceGraphicMask(int, int, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, int): jumps straight to the base-object constructor

    // 0x10021daa0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // InterfaceGraphicMask::InterfaceGraphicMask(int, int, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, int)
    void InterfaceGraphicMask::InterfaceGraphicMask(int param_1, int param_2, Array* param_3, Array* param_4,
                                                    int param_5) {
        field_0 = param_1;
        field_4 = param_2;
        new (&field_8, param_3) Array<int, eastl::allocator>();
        new (&field_32, param_4) Array<int, eastl::allocator>();
        field_56 = param_5;
    }

    // 0x10021db80, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // InterfaceGraphicMask::~InterfaceGraphicMask(): jumps straight to the base-object destructor

    // 0x10021db90, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // InterfaceGraphicMask::~InterfaceGraphicMask()
    void InterfaceGraphicMask::~InterfaceGraphicMask() {
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

    // 0x10021e910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // InputFieldWrapper::InputFieldWrapper(): jumps straight to the base-object constructor

    // 0x10021e930, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // InputFieldWrapper::InputFieldWrapper()
    void InputFieldWrapper::InputFieldWrapper() {
        new (this) InputField();
        new (&field_364) input::KeyConsumptionMap();
        new (&field_1568) Array<HookArg, eastl::allocator>();
        new (&field_1592) Array<HookArg, eastl::allocator>();
        new (&field_1616) Array<HookArg, eastl::allocator>();
        new (&field_1640) Array<HookArg, eastl::allocator>();
    }

} // namespace jag::oldscape::rs2lib
