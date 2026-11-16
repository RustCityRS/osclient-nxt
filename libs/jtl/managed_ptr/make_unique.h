// libs/jtl/managed_ptr/make_unique.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x1001317f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&): jumps straight to the base-object constructor

    // 0x100131810, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<
        oldscape::input::InputForm::SetText(eastl::stringconst&, int)::_lambda(BaseApp*) _1_, void>(
        _lambda_jag__BaseApp___1_* param_1) {
        _func_void_void_ptr_void_ptr* p_Var1;
        _func_void_void_ptr_BaseApp_ptr* p_Var2;
        _func_void_void_ptr* p_Var3;
        _lambda_void__void___1_ local_28[8];
        _lambda_void__jag__BaseApp___1_ local_20[8];
        _lambda_void___1_ local_18[8];

        *(undefined8*)param_1 = 0;
        (eastl::stringconst&)->SetText(int)::{
            lambda(BaseApp*) #1
        }
        ::BaseApp___1____(param_1 + 16);
        p_Var1 =
            fixedfunction::function::function((eastl::basic_string_const&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, void*) #1
        }
        ::operator_cast_to_function_pointer(local_28);
        *(_func_void_void_ptr_void_ptr**)(param_1 + 144) = p_Var1;
        p_Var2 =
            fixedfunction::function::function((eastl::basic_string_const&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::operator_cast_to_function_pointer(local_20);
        *(_func_void_void_ptr_BaseApp_ptr**)param_1 = p_Var2;
        p_Var3 =
            fixedfunction::function::function((eastl::basic_string_const&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
            lambda(void*) #1
        }
        ::operator_cast_to_function_pointer(local_18);
        *(_func_void_void_ptr**)(param_1 + 152) = p_Var3;
    }

    // 0x100131870, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator void (*)(void*, void*)() const
    _func_void_void_ptr_void_ptr* function::function(oldscape::input::InputForm::SetText(eastl::basic_string_const&,
                                                                                         int)::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*, void*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr_void_ptr*)PTR___invoke_100ee9618;
    }

    // 0x100131880, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator void (*)(void*, BaseApp*)() const
    _func_void_void_ptr_BaseApp_ptr* function::function(oldscape::input::InputForm::SetText(eastl::basic_string_const&,
                                                                                            int)::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr_BaseApp_ptr*)PTR_BaseApp___100ee9610;
    }

    // 0x100131890, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::operator void (*)(void*)() const
    _func_void_void_ptr* function::function(oldscape::input::InputForm::SetText(eastl::basic_string_const&, int)::{
        lambda(BaseApp*) #1
    }&&)::{
        lambda(void*) #1
    }
    ::operator_cast_to_function_pointer() {
        return (_func_void_void_ptr*)PTR___invoke_100ee9608;
    }

    // 0x1001318b0, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
        oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
        lambda(void*, void*) #1
    }
    (BaseApp*)#1
},void>(oldscape::input::InputForm::SetText(eastl::stringconst&,int)::{
    lambda(void*, void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function < oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    , void > ((eastl::stringconst&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_1, param_2);
}

// 0x1001318d0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::basic_string<char,
   eastl::allocator> const&, int)::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::SetText(eastl::string
   const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    (eastl::stringconst&)->SetText(int)::{
        lambda(BaseApp*) #1
    }
    ::BaseApp___1__const__(param_2);
}

// 0x100131900, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
    lambda(void*, BaseApp*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::SetText(eastl::stringconst&,int)::{
    lambda(void*, BaseApp*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*, BaseApp*) #1
}
::BaseApp__(_lambda_void__jag__BaseApp___1_* param_1, BaseApp* param_2) {
    function < oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    , void > ((eastl::stringconst&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(param_1, param_1, param_2);
}

// 0x100131920, 32 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::basic_string<char,
   eastl::allocator> const&, int)::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::SetText(eastl::string
   const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*, BaseApp*) #1
}
::operator()(void* param_1, BaseApp * param_2) {
    (eastl::stringconst&)->SetText(int)::{
        lambda(BaseApp*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1001319b0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
    lambda(void*) #1
}
(BaseApp*)#1
},void>(oldscape::input::InputForm::SetText(eastl::stringconst&,int)::{
    lambda(void*) #1}(BaseApp*)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {
    function < oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
        lambda(BaseApp*) #1
    }
    , void > ((eastl::stringconst&)->SetText(int)::{ lambda(BaseApp*) #1 }&&)::{
        lambda(void*) #1
    }
    ::operator()(param_1, param_1);
}

// 0x1001319c0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}, void>(oldscape::input::InputForm::SetText(eastl::string const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::operator()(void*) const
/* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::input::InputForm::SetText(eastl::basic_string<char,
   eastl::allocator> const&, int)::{lambda(BaseApp*)#1},
   void>(oldscape::input::InputForm::SetText(eastl::string
   const&, int)::{lambda(BaseApp*)#1}&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function <
    oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{
    lambda(BaseApp*) #1
}
, void > (oldscape::input::InputForm::SetText(eastl::stringconst&, int)::{ lambda(BaseApp*) #1 }&&)::{
    lambda(void*) #1
}
::operator()(void* param_1) {
    std::__variant_detail::__alt<2ul, eastl::basic_string<char, BucketAllocatorEASTL>>::~__alt(param_1);
}

} // namespace jag::fixedfunction

namespace jag::oldscape {
    class SpotAnimAppendList {
    public:
        // virtual methods in vtable order
        virtual void Count() const;
        virtual void GetBaseModel(unsigned long) const;
        virtual void GetTempModel(unsigned long);
        SpotAnimAppendList(eastl::vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator>> const&);
        ~SpotAnimAppendList();

        // data members, from how the methods use this: 136 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[128];
    };

    // 0x100130b40, 288 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::SpotAnimAppendList(eastl::vector_map<int, SpotAnimClient, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, SpotAnimClient>, eastl::allocator> > const&)
    void SpotAnimAppendList::SpotAnimAppendList(vector_map* param_1) {
        int iVar2;
        long lVar3;
        long lVar4;
        undefined1 local_58[16];
        undefined1 local_48[16];
        SpotAnimClient* local_38;

        new (this) dash3d::ModelAppendList();
        field_0 = PTR_vtable_100ee88f0 + 16;
        local_38 = (SpotAnimClient*)&field_8;
        new (local_38) eastl::fixed_vector<SpotAnimClient, 4ul, true, eastl::allocator>();
        new (&field_128, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        lVar3 = param_1->HeapBeginPtr();
        lVar4 = param_1->end();
        if (lVar3 != lVar4) {
            do {
                if ((*(int*)(lVar3 + 20) != -1) && (*(int*)(lVar3 + 4) != -1)) {
                    local_48->List(*(int*)(lVar3 + 4));
                    iVar2 =
                        shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)local_48);
                    local_58->GetTempModel2(iVar2);
                    local_48->~shared_ptr();
                    if (!operator==((shared_ptr*)local_58, (_func_decltype_nullptr*)0)) {
                        eastl::fixed_vector<SpotAnimClient, 4ul, true, eastl::allocator>::push_back(local_38);
                    }
                    local_58->~shared_ptr();
                }
                lVar3 = lVar3 + 24;
            } while (lVar3 != lVar4);
        }
    }

    // 0x100130cb0, 16 bytes, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::Count() const
    void SpotAnimAppendList::Count() {
        (&field_8)->size();
    }

    // 0x100130cc0, 144 bytes, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::GetBaseModel(unsigned long) const
    void SpotAnimAppendList::GetBaseModel(ulong param_1) {
        int* piVar1;
        shared_ptr<RSevenDebugPresetProvider> local_38[16];
        shared_ptr local_28;

        piVar1 = (int*)
            eastl::vector<SpotAnimClient, eastl::fixed_vector_allocator<20ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<SpotAnimClient,
                               eastl::fixed_vector_allocator<20ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8,
                       param_1);
        local_38->List(*piVar1);
        shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)local_38);
        local_28.GetBaseModel();
        shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)&field_128, &local_28);
        local_28.~shared_ptr();
        local_38->~shared_ptr();
        shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)&field_128);
    }

    // 0x100130d50, 192 bytes, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::GetTempModel(unsigned long)
    void SpotAnimAppendList::GetTempModel(ulong param_1) {
        int iVar1;
        int* piVar2;
        long* plVar3;
        undefined1* this_00;
        shared_ptr<RSevenDebugPresetProvider> local_40[16];
        shared_ptr local_30;

        piVar2 = (int*)
            eastl::vector<SpotAnimClient, eastl::fixed_vector_allocator<20ul, 4ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<SpotAnimClient,
                               eastl::fixed_vector_allocator<20ul, 4ul, 4ul, 0ul, true, eastl::allocator>>*)&field_8,
                       param_1);
        local_40->List(*piVar2);
        iVar1 = shared_ptr<configdecoder::SpotType>::operator->((shared_ptr<configdecoder::SpotType>*)local_40);
        local_30.GetTempModel2(iVar1);
        this_00 = &field_128;
        shared_ptr<dash3d::ModelLit>::operator=((shared_ptr<dash3d::ModelLit>*)this_00, &local_30);
        local_30.~shared_ptr();
        local_40->~shared_ptr();
        plVar3 = (long*)shared_ptr<dash3d::ModelLit>::operator->((shared_ptr<dash3d::ModelLit>*)this_00);
        (**(code**)(*plVar3 + 160))(plVar3, 0, -piVar2[2], 0);
        shared_ptr<dash3d::ModelLit>::operator*((shared_ptr<dash3d::ModelLit>*)this_00);
    }

    // 0x100131310, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // SpotAnimAppendList::~SpotAnimAppendList()
    void SpotAnimAppendList::~SpotAnimAppendList() {
        field_0 = PTR_vtable_100ee88f0 + 16;
        (&field_128)->~shared_ptr();
        (&field_8)->~fixed_vector();
    }

    // 0x1001313a0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char, eastl::allocator> const&)
    /* PacketT<Array<unsigned char, eastl::allocator> >::PacketT(Array<unsigned char,
   eastl::allocator> const&) */

    void PacketT<Array<unsigned char, eastl::allocator>>::PacketT(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                  Array* param_1) {
        PacketT(this, param_1);
    }

} // namespace jag::oldscape

namespace jag {
    // 0x1001305c0, 160 bytes, inline, placed by debug map only (low confidence)
    // std::enable_if<!std::is_array<oldscape::configdecoder::NPCTypeCustomisation>::value, std::unique_ptr<oldscape::configdecoder::NPCTypeCustomisation, BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation> > >::type bucket_make_unique<oldscape::configdecoder::NPCTypeCustomisation, bool, eastl::vector<int, eastl::allocator>, Array<short, eastl::allocator>, Array<short, eastl::allocator>, bool&>(bool&&, eastl::vector<int, eastl::allocator>&&, Array<short, eastl::allocator>&&, Array<short, eastl::allocator>&&, bool&)
    /* std::enable_if<!std::is_array<oldscape::configdecoder::NPCTypeCustomisation>::value,
   std::unique_ptr<oldscape::configdecoder::NPCTypeCustomisation,
   BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation> > >::type
   bucket_make_unique<oldscape::configdecoder::NPCTypeCustomisation, bool,
   eastl::vector<int, eastl::allocator>, Array<short, eastl::allocator>, Array<short,
   eastl::allocator>, bool&>(bool&&, eastl::vector<int, eastl::allocator>&&, Array<short,
   eastl::allocator>&&, Array<short, eastl::allocator>&&, bool&) */

    jag*
    jag::bucket_make_unique<oldscape::configdecoder::NPCTypeCustomisation, bool, eastl::vector<int, eastl::allocator>,
                            Array<short, eastl::allocator>, Array<short, eastl::allocator>, bool&>(
        bool* param_1, vector* param_2, Array* param_3, Array* param_4, bool* param_5) {
        NPCTypeCustomisation* this_00;

        this_00 = (NPCTypeCustomisation*)BucketManager::Allocate(96, 0, 16);
        if (this_00 == (NPCTypeCustomisation*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "ptr != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/make_unique.h",
                37, (char*)0);
        }
        oldscape::configdecoder::NPCTypeCustomisation::NPCTypeCustomisation(this_00, *param_1, param_2, param_3,
                                                                            param_4, *param_5);
        std::unique_ptr<oldscape::configdecoder::NPCTypeCustomisation,
                        BucketDeleter<oldscape::configdecoder::NPCTypeCustomisation>>::unique_ptr<true, void>(this,
                                                                                                              this_00);
        return this;
    }

    // 0x100130830, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::Headbar>::type make_shared<oldscape::Headbar, int&, int&, int&, int&>(int&, int&, int&, int&)
    jag* make_shared<oldscape::Headbar, int&, int&, int&, int&>(int* param_1, int* param_2, int* param_3,
                                                                int* param_4) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        Headbar* local_40[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::Headbar, int&, int&, int&, int&>((void*)((long)pvVar1 + 16), param_1,
                                                                                   param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<oldscape::Headbar>, int, oldscape::Headbar*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100130a90, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::Headbar* placement_new<oldscape::Headbar, int&, int&, int&, int&>(void*, int&, int&, int&, int&)
    Headbar* placement_new<oldscape::Headbar, int&, int&, int&, int&>(void* param_1, int* param_2, int* param_3,
                                                                      int* param_4, int* param_5) {
        oldscape::dash3d::GridRect::GridRect(param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x100130ac0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::Headbar>* placement_new<ref_counter_shared_trivial<oldscape::Headbar>, int, oldscape::Headbar*&>(void*, int&&, oldscape::Headbar*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::Headbar>, int, oldscape::Headbar*&>(void* param_1,
                                                                                                int* param_2,
                                                                                                Headbar** param_3) {
        ref_counter_shared_trivial<oldscape::Headbar>::ref_counter_shared_trivial(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100130ae0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::Headbar>::ref_counter_shared_trivial(unsigned long, oldscape::Headbar*): jumps straight to the base-object constructor

    // 0x100130af0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::Headbar>::ref_counter_shared_trivial(unsigned long, oldscape::Headbar*)
    void ref_counter_shared_trivial<oldscape::Headbar>::ref_counter_shared_trivial(ulong param_1, Headbar* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d50 + 16;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x100130c60, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelAppendList::ModelAppendList()
    void ModelAppendList::ModelAppendList() {
        field_0 = PTR_vtable_100ee89a0 + 16;
    }

    // 0x100131370, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SingleAppendList::SingleAppendList(ModelLit const&)
    void SingleAppendList::SingleAppendList(ModelLit* param_1) {
        new (this) ModelAppendList();
        field_0 = &PTR_Count_100efc108;
        m_pBaseModel = param_1;
    }

} // namespace jag::oldscape::dash3d
