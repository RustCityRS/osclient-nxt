// libs/oldscape/clientlib/applicationcontext/ApplicationContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.clientlib

#include "ApplicationContext.h"

namespace jag::oldscape {
    // 0x100d429ac, 32 bytes, __const
    ApplicationContext::DEFAULT_RENDER_OFFSET = {0, 0, 0, 1, 2, 3, 4, 5};

    // 0x1039926d0, 32 bytes, __common; set at startup by ___cxx_global_var_init.19
    eastl::string ApplicationContext::MEMBERS_PREFERENCE_KEY = "fhtagn";

    // 0x1039926f0, 32 bytes, __common; set at startup by ___cxx_global_var_init.22
    eastl::string ApplicationContext::DISPLAYNAME_KEY = "name";

    // 0x103992710, 32 bytes, __common; set at startup by ___cxx_global_var_init.24
    eastl::string ApplicationContext::AUTHENTICATOR_HASH = "wgahnagl";

    // 0x103992730, 32 bytes, __common; set at startup by ___cxx_global_var_init.26
    eastl::string ApplicationContext::IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED = "phnglui";

    // 0x103992750, 32 bytes, __common; set at startup by ___cxx_global_var_init.28
    eastl::string ApplicationContext::UIDFileName = "random.dat";

    // 0x100009d50: the linker folded this into eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second(), which has identical code
    ApplicationContext::GetInputForm();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::KeepScreenOn(bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::OpenStorePage();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::ShowSystemDialog(eastl::string const&, eastl::string const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::StorePreferenceOnDevice(eastl::string const&, eastl::string const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::StorePreferenceOnDevice(eastl::string const&, bool);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::StorePreferenceOnDevice(eastl::string const&, int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::AcceptDataDownloadPrompt();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::RemovePreferenceFromDevice(eastl::string const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ApplicationContext::Minimise();

    // 0x100029ea0: the linker folded this into InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ApplicationContext::LoadPreferenceFromDevice(eastl::string const&, bool);

    // 0x10002d860: the linker folded this into option::Option<int>::IsValidValue(int const&) const, which has identical code
    ApplicationContext::HasAcceptedDataDownloadPrompt();

    // 0x100120420: the linker folded this into javapal::GameShell::GetVisibleAppHeight(), which has identical code
    ApplicationContext::GetOSVersion();

    // 0x10014ce50: the linker folded this into ApplicationContext::GetCacheLocation(eastl::string const&, eastl::string const&, int), which has identical code
    ApplicationContext::GetHomeDirectory();

    // 0x1003907c0, 64 bytes, placed by class name and debug map
    // ApplicationContext::CloseActiveInputForm()
    void ApplicationContext::CloseActiveInputForm() {
        InputForm* this_00;

        if (operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0)) {
            this_00 = (InputForm*)shared_ptr<input::InputForm>::operator->((shared_ptr<input::InputForm>*)field_8);
            this_00->Close();
            shared_ptr<input::InputForm>::reset();
        }
    }

    // 0x1003908f0, 16 bytes, placed by class name and debug map
    // ApplicationContext::ShowSoftwareLicence()
    void ApplicationContext::ShowSoftwareLicence() {}

    // 0x100390900, 192 bytes, placed by class name and debug map
    // ApplicationContext::ConfigureJavUrl(eastl::string const&)
    ApplicationContext* ApplicationContext::ConfigureJavUrl(basic_string* param_1) {
        char cVar1;
        long lVar2;
        char* pcVar3;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* in_RDX;
        char* pcVar4;

        lVar2 = eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(in_RDX, "?m=", 0);
        if ((lVar2 != -1) ||
            (lVar2 = eastl::basic_string<
                 char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(in_RDX,
                                                                                                          "&m=", 0),
             lVar2 != -1)) {
            new (this) eastl::string(in_RDX);
            return this;
        }
        lVar2 = eastl::basic_string<
            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::find(in_RDX, "?", 0);
        cVar1 = (**(code**)(*(long*)param_1 + 152))(param_1, &MEMBERS_PREFERENCE_KEY, 0);
        if (lVar2 == -1) {
            pcVar3 = "?m=1";
            pcVar4 = "?m=0";
        } else {
            pcVar3 = "&m=1";
            pcVar4 = "&m=0";
        }
        if (cVar1 != '\0') {
            pcVar4 = pcVar3;
        }
        eastl::operator+((eastl*)this, (basic_string*)in_RDX, (value_type*)pcVar4);
        return this;
    }

    // 0x1003909c0, 16 bytes, placed by class name and debug map
    // ApplicationContext::GetScreenRenderOffset()
    undefined8 ApplicationContext::GetScreenRenderOffset() {
        return 0;
    }

    // 0x1003909d0, 64 bytes, placed by class name and debug map
    // ApplicationContext::ShowReviewPrompt()
    void ApplicationContext::ShowReviewPrompt() {
        long* plVar2;
        _func_decltype_nullptr* in_RSI;

        if (std::operator!=((unique_ptr*)&field_24, in_RSI)) {
            plVar2 =
                (long*)std::unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>::operator->(
                    (unique_ptr<auth::AuthLibWrapper, std::default_delete<auth::AuthLibWrapper>>*)&field_24);
            (**(code**)(*plVar2 + 528))(plVar2);
        }
    }

    // 0x1003a0650, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.19
    void ___cxx_global_var_init_19() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&ApplicationContext::MEMBERS_PREFERENCE_KEY) eastl::string("fhtagn", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &ApplicationContext::MEMBERS_PREFERENCE_KEY, 4294967296);
    }

    // 0x1003a06b0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&ApplicationContext::DISPLAYNAME_KEY) eastl::string("name", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &ApplicationContext::DISPLAYNAME_KEY, 4294967296);
    }

    // 0x1003a0710, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.24
    void ___cxx_global_var_init_24() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&ApplicationContext::AUTHENTICATOR_HASH) eastl::string("wgahnagl", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &ApplicationContext::AUTHENTICATOR_HASH, 4294967296);
    }

    // 0x1003a0770, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&ApplicationContext::IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED) eastl::string("phnglui", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &ApplicationContext::IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED, 4294967296);
    }

    // 0x1003a07d0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&ApplicationContext::UIDFileName) eastl::string("random.dat", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &ApplicationContext::UIDFileName, 4294967296);
    }

} // namespace jag::oldscape
