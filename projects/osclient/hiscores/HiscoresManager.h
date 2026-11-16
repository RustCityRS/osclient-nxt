// projects/osclient/hiscores/HiscoresManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    // 0x1001259f0, 48 bytes, inline, placed by class name
    // HiscoresManager::ResetPendingRequests()
    void HiscoresManager::ResetPendingRequests() {
        (&field_288, (HTTPRequest*)0)->reset();
        field_280 = 0;
    }

    // 0x100125a20, 144 bytes, inline, placed by class name
    // HiscoresManager::GetEntry(HiscoresEntry&, eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, eastl::hash_map<eastl::string, int, eastl::hash<eastl::string >, eastl::equal_to<eastl::string >, eastl::allocator, false> const&, eastl::string const&) const
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* HiscoresManager::GetEntry(HiscoresEntry&, eastl::hash_map<int,
   HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>
   const&, eastl::hash_map<eastl::string, int,
   eastl::hash<eastl::string >,
   eastl::equal_to<eastl::string >, eastl::allocator, false> const&,
   eastl::string const&) const */

    void HiscoresManager::GetEntry(HiscoresEntry* param_1, hash_map* param_2, hash_map* param_3,
                                   basic_string* param_4) {
        undefined8 uVar1;
        bool bVar2;
        long lVar3;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];

        local_38 = (eastl[16])param_3->find(param_4);
        local_48 = (hashtable_iterator_base[16])param_3->end();
        bVar2 = eastl::operator!=(local_38, local_48, local_48._8_8_);
        uVar1 = uRam0000000100f8a640;
        if (bVar2) {
            lVar3 = local_38->HeapBeginPtr();
            GetEntry(this, param_1, param_2, *(int*)(lVar3 + 32));
        } else {
            *(undefined8*)param_1 = _NULL_ENTRY;
            param_1->field_8 = uVar1;
        }
    }

    // 0x100125b40, 128 bytes, inline, placed by class name
    // HiscoresManager::GetEntry(HiscoresEntry&, eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false> const&, int) const
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* HiscoresManager::GetEntry(HiscoresEntry&, eastl::hash_map<int,
   HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>
   const&, int) const */

    void HiscoresManager::GetEntry(HiscoresEntry* param_1, hash_map* param_2, int param_3) {
        undefined8 uVar1;
        bool bVar2;
        long lVar3;
        hashtable_iterator_base local_40[16];
        eastl local_30[20];
        int local_1c;

        local_1c = param_3;
        local_30._0_16_ = param_2->find(&local_1c);
        local_40 = (hashtable_iterator_base[16])param_2->end();
        bVar2 = eastl::operator!=(local_30, local_40, local_40._8_8_);
        uVar1 = uRam0000000100f8a640;
        if (bVar2) {
            lVar3 = local_30->HeapBeginPtr();
            param_1->field_0 = *(undefined4*)(lVar3 + 8);
            param_1->field_8 = *(undefined8*)(lVar3 + 16);
        } else {
            *(undefined8*)param_1 = _NULL_ENTRY;
            param_1->field_8 = uVar1;
        }
    }

    // 0x10013b090, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // HiscoresManager::HiscoresManager(): jumps straight to the base-object constructor

    // 0x10013b0b0, 336 bytes, base-object constructor, inline, placed by class name and debug map
    // HiscoresManager::HiscoresManager()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* HiscoresManager::HiscoresManager() */

    void HiscoresManager::HiscoresManager() {
        undefined4 uVar1;
        longlong lVar2;
        allocator local_38[8];

        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (this) eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>(
            local_38);
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_56, local_38)
            eastl::hash_map<int, HiscoresEntry, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>();
        lVar2 = lRam0000000100f8a640;
        uVar1 = NULL_ENTRY_4;
        field_112 = _NULL_ENTRY;
        field_116 = uVar1;
        field_120 = lVar2;
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_128, local_38) eastl::hash_map<eastl::string, int, eastl::hash<eastl::string>,
                                                   eastl::equal_to<eastl::string>, eastl::allocator, false>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_184, local_38) eastl::hash_map<eastl::string, int, eastl::hash<eastl::string>,
                                                   eastl::equal_to<eastl::string>, eastl::allocator, false>();
        field_240 = 0;
        new (&field_248) eastl::string();
        field_280 = 0;
        field_281 = '\0';
        std::unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>::unique_ptr<true, void>(
            (unique_ptr<http::HTTPRequest, std::default_delete<http::HTTPRequest>>*)&field_288);
        m_dataSource = 0;
        Reset(this);
    }

    // 0x10013d350, 16 bytes, complete-object destructor, inline, placed by class name
    // HiscoresManager::~HiscoresManager(): jumps straight to the base-object destructor

    // 0x10013d360, 96 bytes, base-object destructor, inline, placed by class name
    // HiscoresManager::~HiscoresManager()
    void HiscoresManager::~HiscoresManager() {
        (&field_288)->~unique_ptr();
        (&field_248)->~basic_string();
        (&field_184)->~hash_map();
        (&field_128)->~hash_map();
        (&field_56)->~hash_map();
        ~hash_map();
    }

} // namespace jag::oldscape

namespace jag::fixedfunction {
    // 0x10013b640, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::__2, void>(
        function<void(BaseApp*), 128ul, 16ul, (Methods)0>* this, __2* param_1) {
        *(undefined8*)this = 0;
        *(__2*)(this + 16) = *param_1;
        *(code**)(this + 144) =
            function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(code**)(this + 152) =
            function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10013b680, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x10013b690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::Client::MainLoop()::$_2,
   void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined1*)param_2 = *(undefined1*)param_1;
    }

    // 0x10013b6a0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*, BaseApp*)#1}::__invoke(void*, BaseApp*)
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(void* param_1, BaseApp* param_2) {
        operator()(param_1, param_2);
    }

    // 0x10013b6b0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*, BaseApp*)#1}::operator()(void*, BaseApp*) const
    /* function<void (BaseApp*), 128ul, 16ul,
   (Methods)0>::function<oldscape::Client::MainLoop()::$_2,
   void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*,
   BaseApp*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, BaseApp*) const */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* param_1, BaseApp * param_2) {
        oldscape::Client::MainLoop()::$_2::operator()(param_1, param_2);
    }

    // 0x10013b770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x10013b8d0, 48 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<eastl::string, eastl::string >(eastl::string const&, eastl::string&, int)
    bool jag::FromString<eastl::string, eastl::string>(basic_string* param_1, basic_string* param_2, int param_3) {
        char* pcVar1;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(pcVar1, param_2, param_3);
    }

    // 0x10013b9e0, 32 bytes, inline, placed by debug map only (low confidence)
    // FromText(char const*, eastl::string&, int)
    undefined8 FromText(char* param_1, basic_string* param_2, int param_3) {
        param_2->assign(param_1);
        return 1;
    }

} // namespace jag
