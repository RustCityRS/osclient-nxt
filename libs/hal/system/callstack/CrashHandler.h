// libs/hal/system/callstack/CrashHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::callstack {
    class CrashHandler {
    public:
        void Set(CrashHandlerInterface*);
        void DispatchProgramCrash(JagException const&);
        Get();
        void SetTopLevelExceptionHandler();
        void SignalHandler(int);
        void RemoveTopLevelExceptionHandler();
        static /* 64 bytes */ m_mutex;       // initialised in its definition
        static /* 24 bytes */ m_signalState; // = { 0, 0, 0, 0, 165664, 0 }
        static /* 8 bytes */ m_crashHandler;
        static /* 16 bytes */ m_act;
    };

    // 0x100187980, 16 bytes, inline, placed by class name and debug map
    // CrashHandler::Set(CrashHandlerInterface*)
    void CrashHandler::Set(CrashHandlerInterface* param_1) {
        m_crashHandler = param_1;
    }

    // 0x1009f91f0, 32 bytes, inline, placed by class name
    // CrashHandler::DispatchProgramCrash(JagException const&)
    void CrashHandler::DispatchProgramCrash(JagException* param_1) {
        if (m_crashHandler != (undefined8*)0) {
            (**(code**)*m_crashHandler)(m_crashHandler, param_1);
        }
    }

    // 0x100ca89f0, 16 bytes, inline, placed by class name
    // CrashHandler::Get()
    undefined8 CrashHandler::Get() {
        return m_crashHandler;
    }

} // namespace jag::callstack

namespace jag {
    // 0x100188480, 16 bytes, inline, placed by debug map only (low confidence)
    // Args::GetArgc() const
    void Args::GetArgc() {
        size();
    }

    // 0x100188550, 16 bytes, inline, placed by debug map only (low confidence)
    // Args::GetArgv(unsigned long) const
    void Args::GetArgv(ulong param_1) {
        eastl::vector<eastl::string, eastl::allocator>::operator[]((vector<eastl::string, eastl::allocator>*)this,
                                                                   param_1);
    }

    // 0x100188560, 80 bytes, inline, placed by debug map only (low confidence)
    // starts_with(char const*, char const*)
    undefined8 starts_with(char* param_1, char* param_2) {
        int iVar1;
        size_t sVar2;
        undefined4 extraout_var;
        undefined8 uVar4;

        sVar2 = _strlen(param_2);
        if (_strlen(param_1) < (sVar2 & 4294967295)) {
            uVar4 = 0;
        } else {
            iVar1 = _memcmp(param_1, param_2, sVar2 & 4294967295);
            uVar4 = CONCAT71((int7)(CONCAT44(extraout_var, iVar1) >> 8), iVar1 == 0);
        }
        return uVar4;
    }

    // 0x100188640, 80 bytes, inline, placed by debug map only (low confidence)
    // bool starts_with<eastl::string >(eastl::string const&, char const*)
    bool starts_with<eastl::string>(basic_string* param_1, char* param_2) {
        int iVar1;
        size_t sVar2;
        bool bVar4;

        sVar2 = _strlen(param_2);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() <
            (sVar2 & 4294967295)) {
            bVar4 = false;
        } else {
            iVar1 = param_1->compare(0, sVar2 & 4294967295, param_2);
            bVar4 = iVar1 == 0;
        }
        return bVar4;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100189280, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::Instance()
    long OSRenderCore_RenderThread::Instance() {
        return OSRenderCore_Impl::m_pCore + 704;
    }

    // 0x100189310, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread::Instance()
    /* OSRenderCore_AudioThread::Instance() */

    undefined8 OSRenderCore_AudioThread::Instance() {
        return OSRenderCore_Impl::m_pCore;
    }

} // namespace jag::oldscape
