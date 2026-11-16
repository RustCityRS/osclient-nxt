// libs/game/runetek5/script/ScriptQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ScriptQueue.h"

namespace jag::game {
    // 0x1003b6560
    unsigned long long ScriptQueue::AddScript(const shared_ptr<ui::Component>& component, const Hook& hook,
                                              unsigned int arg3, unsigned int arg4) {
        unsigned int uVar1;
        char* this_00;

        unsigned int local_c = arg3;
        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          12, 0, nullptr);
            this_00->~OptionStore();
        }
        return local_18 = field_32 + 1;
        field_32 = local_18;
        if ((long)local_18 < 0) {
            local_18 = 0;
            field_32 = 0;
            uVar1 = field_40;
        } else {
            uVar1 = field_40;
        }
        if (uVar1 < arg4) {
            local_c = arg3 + 1;
        }
        emplace_back<shared_ptr<ui::Component> const&, unsigned long long&, Hook const&, unsigned int&>(
            component, local_18, hook, local_c);
        return local_18;
    }

    // 0x1003b66c0
    bool ScriptQueue::RemoveQueueID(unsigned long long arg1) {
        char* this_00;

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          32, 0, nullptr);
            this_00->~OptionStore();
        }
        auto pQVar1 = HeapBeginPtr();
        auto pQVar2 = end();
        pQVar1 = eastl::find_if<ScriptQueue::QueuedScript const*, unsigned long long->RemoveQueueID()::__0>(
            pQVar1, pQVar2, (__0*)arg1);
        pQVar2 = (QueuedScript*)end();
        auto pQVar3 = end();
        erase(pQVar1, pQVar3);
        pQVar3 = (QueuedScript*)HeapBeginPtr();
        auto pQVar4 = end();
        pQVar3 = eastl::find_if<ScriptQueue::QueuedScript const*, unsigned long long->RemoveQueueID()::__0>(
            pQVar3, pQVar4, (__0*)arg1);
        pQVar4 = (QueuedScript*)end();
        if (pQVar3 != pQVar4) {
            LogAssert(
                "eastl::find_if(m_queuedScripts.cbegin(), m_queuedScripts.cend(), findFunc) == m_queuedScripts.cend()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                "ScriptQueue.cpp",
                42, nullptr);
        }
        return pQVar1 != pQVar2;
    }

    // 0x1003b6880
    void ScriptQueue::RemoveAll(const shared_ptr<ui::Component>& component) {
        char* this_00;

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          48, 0, nullptr);
            this_00->~OptionStore();
        }
        auto pQVar1 = HeapBeginPtr();
        auto pQVar2 = end();
        pQVar1 = eastl::remove_if<ScriptQueue::QueuedScript*, (shared_ptr<ui::Component> const&)->RemoveAll()::__1>(
            pQVar1, pQVar2, (__1*)component);
        pQVar2 = (QueuedScript*)end();
        erase(pQVar1, pQVar2);
    }

    // 0x1003b6940
    unsigned long ScriptQueue::RemoveScriptTypeID(const shared_ptr<ui::Component>& component, unsigned int arg2) {
        uint32_t in_EAX;
        QueuedScript* queuedScript1;
        QueuedScript* queuedScript2;
        char* this_00;
        uint64_t in_R9;
        __2 a_StackY_a8[128];

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          60, 0, nullptr, in_R9, (((uint64_t)arg2 << 32) | (uint32_t)in_EAX));
            this_00->~OptionStore();
        }
        queuedScript1 = (QueuedScript*)HeapBeginPtr();
        auto pQVar1 = end();
        pQVar1 = eastl::remove_if<ScriptQueue::QueuedScript*,
                                  (shared_ptr<ui::Component> const&)->RemoveScriptTypeID(unsigned int)::__2>(
            queuedScript1, pQVar1, a_StackY_a8 + 132);
        auto pQVar2 = end();
        queuedScript2 = (QueuedScript*)end();
        erase(pQVar1, queuedScript2);
        return pQVar1 != pQVar2 & 4294967295;
    }

    // 0x1003b6a30
    bool ScriptQueue::HasQueueID(const shared_ptr<ui::Component>& component, unsigned long long arg2) const {
        unsigned long long local_28 = arg2;
        auto pQVar1 = HeapBeginPtr();
        auto pQVar2 = end();
        pQVar1 = eastl::find_if<ScriptQueue::QueuedScript const*,
                                (shared_ptr<ui::Component> const&)->HasQueueID(unsigned long long) const ::__3>(
            pQVar1, pQVar2, (__3*)&local_28);
        pQVar2 = (QueuedScript*)end();
        return pQVar1 != pQVar2;
    }

    // 0x1003b6af0
    void ScriptQueue::GetCount(const shared_ptr<ui::Component>& component) const {
        QueuedScript* queuedScript1;
        QueuedScript* queuedScript2;

        queuedScript1 = (QueuedScript*)HeapBeginPtr();
        queuedScript2 = (QueuedScript*)end();
        std::count_if<ScriptQueue::QueuedScript const*, (shared_ptr<ui::Component> const&)->GetCount() const ::__4>(
            queuedScript1, queuedScript2, (__4*)component);
    }

    // 0x1003b6ba0
    void ScriptQueue::GetScriptTypeCount(const shared_ptr<ui::Component>& component, unsigned int arg2) const {
        QueuedScript* queuedScript1;
        QueuedScript* queuedScript2;
        __5 local_24;

        queuedScript1 = (QueuedScript*)HeapBeginPtr();
        queuedScript2 = (QueuedScript*)end();
        std::count_if<ScriptQueue::QueuedScript const*,
                      (shared_ptr<ui::Component> const&)->GetScriptTypeCount(unsigned int) const ::__5>(
            queuedScript1, queuedScript2, &local_24);
    }

} // namespace jag::game
