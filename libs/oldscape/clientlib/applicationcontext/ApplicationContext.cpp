// libs/oldscape/clientlib/applicationcontext/ApplicationContext.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.clientlib

#include "ApplicationContext.h"

namespace jag::oldscape {
    // 0x100d429ac
    int32_t ApplicationContext::DEFAULT_RENDER_OFFSET[8] = {0, 0, 0, 1, 2, 3, 4, 5};

    // 0x1039926d0, set at startup by ___cxx_global_var_init.19
    eastl::string ApplicationContext::MEMBERS_PREFERENCE_KEY = "fhtagn";

    // 0x1039926f0, set at startup by ___cxx_global_var_init.22
    eastl::string ApplicationContext::DISPLAYNAME_KEY = "name";

    // 0x103992710, set at startup by ___cxx_global_var_init.24
    eastl::string ApplicationContext::AUTHENTICATOR_HASH = "wgahnagl";

    // 0x103992730, set at startup by ___cxx_global_var_init.26
    eastl::string ApplicationContext::IOS_DATA_DOWNLOAD_PROMPT_ACCEPTED = "phnglui";

    // 0x103992750, set at startup by ___cxx_global_var_init.28
    eastl::string ApplicationContext::UIDFileName = "random.dat";

    // 0x100009d50: ApplicationContext::GetInputForm() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100009e70: ApplicationContext::KeepScreenOn(bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::OpenStorePage() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::ShowSystemDialog(eastl::string const&, eastl::string const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::StorePreferenceOnDevice(eastl::string const&, eastl::string const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::StorePreferenceOnDevice(eastl::string const&, bool) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::StorePreferenceOnDevice(eastl::string const&, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::AcceptDataDownloadPrompt() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::RemovePreferenceFromDevice(eastl::string const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ApplicationContext::Minimise() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: ApplicationContext::LoadPreferenceFromDevice(eastl::string const&, bool) has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: ApplicationContext::HasAcceptedDataDownloadPrompt() has the same machine code as option::Option<int>::IsValidValue(int const&) const

    // 0x100120420: ApplicationContext::GetOSVersion() has the same machine code as javapal::GameShell::GetVisibleAppHeight()

    // 0x10014ce50: ApplicationContext::GetHomeDirectory() has the same machine code as ApplicationContext::GetCacheLocation(eastl::string const&, eastl::string const&, int)

    // 0x1003907c0
    void ApplicationContext::CloseActiveInputForm() {
        uint8_t* midiPlayerMainThread = &field_8;
        if (*midiPlayerMainThread != nullptr) {
            ((InputForm*)(*midiPlayerMainThread).operator->())->Close();
            midiPlayerMainThread->reset();
        }
    }

    // 0x1003908f0
    void ApplicationContext::ShowSoftwareLicence() {}

    // 0x100390900
    auto ApplicationContext::ConfigureJavUrl(const eastl::string& str) {
        long lVar1 = str.find("?m=", 0);
        if ((lVar1 == -1) && (lVar1 = str.find("&m=", 0), lVar1 == -1)) {
            str.find("?", 0);
            LoadPreferenceFromDevice(&MEMBERS_PREFERENCE_KEY, 0);
            result + str;
        } else {
            auto result(str);
        }
        return result;
    }

    // 0x1003909c0
    void ApplicationContext::GetScreenRenderOffset() {
        return 0;
    }

    // 0x1003909d0
    void ApplicationContext::ShowReviewPrompt() {
        long* plVar2;
        void* in_RSI;

        if (&field_24 != in_RSI) {
            plVar2 = (long*)field_24.operator->();
            (**(void (**)(...))(*plVar2 + 528))(plVar2);
        }
    }

} // namespace jag::oldscape
