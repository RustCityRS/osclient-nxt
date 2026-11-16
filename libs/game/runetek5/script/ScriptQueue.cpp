// libs/game/runetek5/script/ScriptQueue.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ScriptQueue.h"

namespace jag::game {
    // 0x1003b6560, 144 bytes, placed by class name and debug map
    // ScriptQueue::AddScript(shared_ptr<ui::Component> const&, Hook const&, unsigned int, unsigned int)
    ulonglong ScriptQueue::AddScript(shared_ptr* param_1, Hook* param_2, uint param_3, uint param_4) {
        uint uVar1;
        char* this_00;
        ulonglong local_18;
        uint local_c;

        local_c = param_3;
        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          12, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        local_18 = field_32 + 1;
        field_32 = local_18;
        if ((long)local_18 < 0) {
            local_18 = 0;
            field_32 = 0;
            uVar1 = field_40;
        } else {
            uVar1 = field_40;
        }
        if (uVar1 < param_4) {
            local_c = param_3 + 1;
        }
        eastl::vector<ScriptQueue::QueuedScript, eastl::allocator>::emplace_back<
            shared_ptr<ui::Component> const&, unsigned long long&, Hook_const&, unsigned int&>(
            (vector<ScriptQueue::QueuedScript, eastl::allocator>*)this, param_1, &local_18, param_2, &local_c);
        return local_18;
    }

    // 0x1003b66c0, 240 bytes, placed by class name and debug map
    // ScriptQueue::RemoveQueueID(unsigned long long)
    bool ScriptQueue::RemoveQueueID(ulonglong param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        QueuedScript* pQVar3;
        QueuedScript* pQVar4;
        QueuedScript* pQVar5;
        QueuedScript* pQVar6;
        char* this_00;

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          32, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        pQVar3 = eastl::find_if<ScriptQueue::QueuedScript_const*, unsigned long long->RemoveQueueID()::__0>(
            uVar1, uVar2, param_1);
        pQVar4 = (QueuedScript*)end();
        pQVar5 = (QueuedScript*)end();
        erase(pQVar3, pQVar5);
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        pQVar5 = eastl::find_if<ScriptQueue::QueuedScript_const*, unsigned long long->RemoveQueueID()::__0>(
            uVar1, uVar2, param_1);
        pQVar6 = (QueuedScript*)end();
        if (pQVar5 != pQVar6) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "eastl::find_if(m_queuedScripts.cbegin(), m_queuedScripts.cend(), findFunc) == m_queuedScripts.cend()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                "ScriptQueue.cpp",
                42, (char*)0);
        }
        return pQVar3 != pQVar4;
    }

    // 0x1003b6880, 128 bytes, placed by class name and debug map
    // ScriptQueue::RemoveAll(shared_ptr<ui::Component> const&)
    void ScriptQueue::RemoveAll(shared_ptr* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        QueuedScript* pQVar3;
        QueuedScript* pQVar4;
        char* this_00;

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          48, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        pQVar3 = eastl::remove_if<ScriptQueue::QueuedScript*, (shared_ptr<ui::Component> const&)->RemoveAll()::__1>(
            uVar1, uVar2, param_1);
        pQVar4 = (QueuedScript*)end();
        erase(pQVar3, pQVar4);
    }

    // 0x1003b6940, 160 bytes, placed by class name and debug map
    // ScriptQueue::RemoveScriptTypeID(shared_ptr<ui::Component> const&, unsigned int)
    ulong ScriptQueue::RemoveScriptTypeID(shared_ptr* param_1, uint param_2) {
        undefined4 in_EAX;
        eastl* peVar1;
        undefined8 uVar2;
        QueuedScript* pQVar3;
        QueuedScript* pQVar4;
        QueuedScript* pQVar5;
        char* this_00;
        undefined8 in_R9;
        undefined1 auStackY_a8[128];

        if (field_44 != '\0') {
            this_00 = "!m_queueLocked";
            LogFatalError("!m_queueLocked",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/script/"
                          "ScriptQueue.cpp",
                          60, 0, (char*)0, in_R9, CONCAT44(param_2, in_EAX));
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        peVar1 = (eastl*)HeapBeginPtr();
        uVar2 = end();
        pQVar3 = eastl::remove_if<ScriptQueue::QueuedScript*,
                                  (shared_ptr<ui::Component> const&)->RemoveScriptTypeID(unsigned int)::__2>(
            peVar1, uVar2, auStackY_a8 + 132, param_1);
        pQVar4 = (QueuedScript*)end();
        pQVar5 = (QueuedScript*)end();
        erase(pQVar3, pQVar5);
        return CONCAT71((int7)((ulong)peVar1 >> 8), pQVar3 != pQVar4) & 4294967295;
    }

    // 0x1003b6a30, 96 bytes, placed by class name and debug map
    // ScriptQueue::HasQueueID(shared_ptr<ui::Component> const&, unsigned long long) const
    bool ScriptQueue::HasQueueID(shared_ptr* param_1, ulonglong param_2) {
        eastl* peVar1;
        undefined8 uVar2;
        QueuedScript* pQVar3;
        QueuedScript* pQVar4;
        ulonglong local_28;

        local_28 = param_2;
        peVar1 = (eastl*)HeapBeginPtr();
        uVar2 = end();
        pQVar3 = eastl::find_if<ScriptQueue::QueuedScript_const*,
                                (shared_ptr<ui::Component> const&)->HasQueueID(unsigned long long) const ::__3>(
            peVar1, uVar2, &local_28, param_1);
        pQVar4 = (QueuedScript*)end();
        return pQVar3 != pQVar4;
    }

    // 0x1003b6af0, 64 bytes, placed by class name and debug map
    // ScriptQueue::GetCount(shared_ptr<ui::Component> const&) const
    void ScriptQueue::GetCount(shared_ptr* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;

        uVar1 = HeapBeginPtr();
        uVar2 = end();
        std::count_if<ScriptQueue::QueuedScript_const*, (shared_ptr<ui::Component> const&)->GetCount() const ::__4>(
            uVar1, uVar2, param_1);
    }

    // 0x1003b6ba0, 64 bytes, placed by class name
    // ScriptQueue::GetScriptTypeCount(shared_ptr<ui::Component> const&, unsigned int) const
    void ScriptQueue::GetScriptTypeCount(shared_ptr* param_1, uint param_2) {
        undefined4 in_EAX;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 in_R8;
        undefined8 in_R9;
        undefined1 auStackY_a8[128];
        undefined8 uVar3;

        uVar3 = CONCAT44(param_2, in_EAX);
        uVar1 = HeapBeginPtr();
        uVar2 = end();
        std::count_if<ScriptQueue::QueuedScript_const*,
                      (shared_ptr<ui::Component> const&)->GetScriptTypeCount(unsigned int) const ::__5>(
            uVar1, uVar2, auStackY_a8 + 132, param_1, in_R8, in_R9, uVar3);
    }

} // namespace jag::game
