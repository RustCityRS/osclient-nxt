// projects/osclient/hiscores/HiscoresManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::fixedfunction {
    // 0x10013b640
    function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&& arg1) {
        *(uint64_t*)this = 0;
        *(__2*)(this + 16) = arg1;
        *(void (**)(...))(this + 144) =
            function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*, BaseApp*) #1
        }
        ::BaseApp__;
        *(void (**)(...))(this + 152) =
            function<oldscape::Client::MainLoop()::$_2, void>(oldscape::Client::MainLoop()::$_2&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x10013b680
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        lambda(void*, void*) #1
    }
    ::__invoke(_lambda_void__void___1_* this, void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
        return;
    }

    // 0x10013b690
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        lambda(void*, void*) #1
    }
    ::operator()(_lambda_void__void___1_* this, void* arg1, void* arg2) {
        *(_lambda_void__void___1_*)arg1 = *this;
        return;
    }

    // 0x10013b6a0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::__invoke(void* arg1, BaseApp* arg2) {
        lambda(void*, BaseApp*) #1
    }
    ::BaseApp__(_lambda_void__jag__BaseApp___1_* this, void* arg1, BaseApp* baseApp) {
        operator()(this, arg1, baseApp);
        return;
    }

    // 0x10013b6b0
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*, BaseApp*) #1
    }
    ::operator()(void* arg1, BaseApp * arg2) const {
        lambda(void*, BaseApp*) #1
    }
    ::operator()(_lambda_void__jag__BaseApp___1_* this, void* arg1, BaseApp * baseApp) {
        oldscape::Client::MainLoop()::$_2::operator()((__2*)this, arg1);
        return;
    }

    // 0x10013b770
    void function<void(BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::Client::MainLoop()::$_2, void>(
        oldscape::Client::MainLoop()::$_2&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag::oldscape {
    // 0x1001259f0
    void HiscoresManager::ResetPendingRequests() {
        field_288.reset(nullptr);
        field_280 = 0;
    }

    // 0x100125a20
    void HiscoresManager::GetEntry(HiscoresEntry& hiscoresEntry, const eastl::hash_map<int, HiscoresEntry>& arg2,
                                   const eastl::hash_map<eastl::string, int>& arg3, const eastl::string& str) const {
        long lVar3;
        obj_iterator local_48;
        eastl local_38;

        &local_38 = (eastl[16])arg3.find(str);
        &local_48 = (obj_iterator[16])arg3.end();
        bool cVar2 = local_38 != local_48;
        uint64_t uVar1 = NULL_ENTRY.field_8;
        if (!cVar2) {
            *(uint64_t*)hiscoresEntry = NULL_ENTRY;
            hiscoresEntry.field_8 = uVar1;
        } else {
            lVar3 = local_38.HeapBeginPtr();
            GetEntry(hiscoresEntry, arg2, *(int*)(lVar3 + 32));
        }
    }

    // 0x100125b40
    void HiscoresManager::GetEntry(HiscoresEntry& hiscoresEntry, const eastl::hash_map<int, HiscoresEntry>& arg2,
                                   int arg3) const {
        long lVar3;
        obj_iterator local_40;
        eastl local_30;

        local_30._0_16_ = arg2.find(arg3);
        &local_40 = (obj_iterator[16])arg2.end();
        bool cVar2 = local_30 != local_40;
        uint64_t uVar1 = NULL_ENTRY.field_8;
        if (!cVar2) {
            *(uint64_t*)hiscoresEntry = NULL_ENTRY;
            hiscoresEntry.field_8 = uVar1;
        } else {
            lVar3 = local_30.HeapBeginPtr();
            hiscoresEntry.field_0 = *(uint32_t*)(lVar3 + 8);
            hiscoresEntry.field_8 = *(uint64_t*)(lVar3 + 16);
        }
    }

    // 0x10013b0b0
    HiscoresManager::HiscoresManager() {
        new (this) eastl::hash_map<int, HiscoresEntry>(local_38);
        new (&field_56) eastl::hash_map<int, HiscoresEntry>(local_38);
        long long lVar2 = NULL_ENTRY.field_8;
        uint32_t uVar1 = NULL_ENTRY_4;
        field_112 = NULL_ENTRY;
        field_116 = uVar1;
        field_120 = lVar2;
        new (&field_128) eastl::hash_map<eastl::string, int>(local_38);
        new (&field_184) eastl::hash_map<eastl::string, int>(local_38);
        field_240 = 0;
        new (&field_248) eastl::string();
        field_280 = 0;
        field_281 = 0;
        field_288.unique_ptr<true, void>();
        m_dataSource = 0;
        Reset();
    }

    // 0x10013d360
    HiscoresManager::~HiscoresManager() {
        field_288.~unique_ptr();
        field_248.~basic_string();
        field_184.~hash_map();
        field_128.~hash_map();
        field_56.~hash_map();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x10013b8d0
    bool FromString<eastl::string, eastl::string>(const eastl::string& str1, eastl::string& str2, int arg3) {
        char* str1_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        return (bool)FromText(str1_00, str2, arg3);
    }

    // 0x10013b970
    bool SystemDetails::GetDeepLinkingValueForKey<eastl::string>(eastl::string const&, char const*, eastl::string&)::{
        lambda(eastl::pair<eastl::string, eastl::string>) #1
    }
    ::operator()(eastl::pair<eastl::string, eastl::string> arg1) const {
        lambda(eastl::pair<eastl::string, eastl::string>) #1
    }
    ::operator()(_lambda_eastl__pair<eastl::string, eastl::string> __1_* this,
                 pair<eastl::string, eastl::string_>* arg1) {
        int iVar1;

        iVar1 = arg1->compare((char*)**(uint64_t**)this);
        return iVar1 == 0;
    }

    // 0x10013b9e0
    void FromText(const char* str1, eastl::string& str2, int arg3) {
        str2.assign(str1);
        return 1;
    }

} // namespace jag
