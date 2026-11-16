// libs/hal/system/callstack/CrashHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::callstack {
    class CrashHandler {
    public:
        void Set(CrashHandlerInterface* crashHandlerInterface);
        void DispatchProgramCrash(const JagException& jagException);
        void Get();
        void SetTopLevelExceptionHandler();
        void SignalHandler(int arg1);
        void RemoveTopLevelExceptionHandler();
        static int32_t m_mutex[16];      // initialised in its definition
        static int32_t m_signalState[6]; // = { 0, 0, 0, 0, 165664, 0 }
        static int64_t m_crashHandler;
        static sigaction m_act;

        uint8_t _unknown_0[1];
    };

    // 0x100187980
    void CrashHandler::Set(CrashHandlerInterface* crashHandlerInterface) {
        m_crashHandler = crashHandlerInterface;
    }

    // 0x1009f91f0
    void CrashHandler::DispatchProgramCrash(const JagException& jagException) {
        if (m_crashHandler != nullptr) {
            (**(void (**)(...))*m_crashHandler)(m_crashHandler, jagException);
        }
    }

    // 0x100ca89f0
    void CrashHandler::Get() {
        return m_crashHandler;
    }

} // namespace jag::callstack

namespace jag {
    // 0x100188480
    void Args::GetArgc() const {
        size();
    }

    // 0x100188550
    void Args::GetArgv(unsigned long arg1) const {
        (*this)[arg1];
    }

    // 0x100188560
    void starts_with(const char* str1, const char* str2) {
        int iVar1;
        uint32_t extraout_var;
        uint64_t uVar4;

        size_t sVar2 = _strlen(str2);
        if (_strlen(str1) < (sVar2 & 4294967295)) {
            uVar4 = 0;
        } else {
            iVar1 = _memcmp(str1, str2, sVar2 & 4294967295);
            uVar4 = (((uint64_t)((int64_t)((((uint64_t)extraout_var << 32) | (uint32_t)iVar1) >> 8)) << 8) |
                     (uint8_t)(iVar1 == 0));
        }
        return uVar4;
    }

    // 0x100188640
    bool starts_with<eastl::string>(const eastl::string& str1, const char* str2) {
        bool bVar4;

        size_t sVar2 = _strlen(str2);
        if (str1.size() < (sVar2 & 4294967295)) {
            bVar4 = false;
        } else {
            bVar4 = str1.compare(0, sVar2 & 4294967295, str2) == 0;
        }
        return bVar4;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100189280
    OSRenderCore_RenderThread* OSRenderCore_RenderThread::Instance() {
        return (OSRenderCore_RenderThread*)(OSRenderCore_Impl::m_pCore + 704);
    }

    // 0x100189310
    void OSRenderCore_LogicThread::Instance() {
        return OSRenderCore_Impl::m_pCore;
    }

} // namespace jag::oldscape
