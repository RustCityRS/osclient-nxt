// libs/hal/render/debug/GPUMemoryAllocatorZoneMonitor.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "GPUMemoryAllocatorZoneMonitor.h"

namespace jag::render {
    // 0x100904f20, the same machine code as GPUMemoryAllocatorZoneMonitor::GetRootZone() const
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetRootZone() {
        return m_pRootZone;
    }

    // 0x100c29a00
    GPUMemoryAllocatorZoneMonitor::GPUMemoryAllocatorZoneMonitor() {
        new (this) eastl::vector_map<unsigned long, eastl::fixed_stack<GPUMemoryAllocatorZone*, 256ul, true>>();
        new (&field_40)
            eastl::fixed_map<eastl::pair<GPUMemoryAllocatorZone*, unsigned long>, GPUMemoryAllocatorZone*, 1024ul>();
        new (&field_57536) eastl::fixed_vector<GPUMemoryAllocatorZone, 1024ul>();
        m_pRootZone = nullptr;
        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      11, nullptr);
        }
        PushZone("RootZone");
        SetRootZone((GPUMemoryAllocatorZone*)GetCurrentZone());
    }

    // 0x100c29af0
    void GPUMemoryAllocatorZoneMonitor::PushZone(const char* str) {
        auto gpuMemoryAllocatorZone = GetCurrentZone();
        auto local_20 = CreateZone(gpuMemoryAllocatorZone, str);
        if (local_20 == nullptr) {
            LogAssert("zone != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      62, nullptr);
        }
        auto this_00 = GetZoneStack();
        auto this_01 = this_00->SSOBeginPtr();
        auto ppGVar1 = this_01->HeapBeginPtr();
        auto pvVar2 = this_00->SSOBeginPtr();
        auto ppGVar3 = pvVar2->end();
        ppGVar1 = eastl::find_if<GPUMemoryAllocatorZone**, (char const*)->PushZone()::__104>(ppGVar1, ppGVar3,
                                                                                             (__104*)&local_20);
        pvVar2 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->SSOBeginPtr();
        ppGVar3 = (GPUMemoryAllocatorZone**)pvVar2->end();
        if (ppGVar1 != ppGVar3) {
            LogAssert("it == zoneStack.get_container().end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      70, "Attempting to push zone that is already on the stack");
        }
        pvVar2 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->SSOBeginPtr();
        ppGVar3 = (GPUMemoryAllocatorZone**)pvVar2->end();
        if (ppGVar1 == ppGVar3) {
            this_00->push(local_20);
        }
    }

    // 0x100c29bf0
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::GetCurrentZone() {
        GPUMemoryAllocatorZone** ppGVar2;

        if (((stack<math::Rect<int>, eastl::vector<math::Rect<int>>>*)GetZoneStack())->empty() == '\0') {
            ppGVar2 = (GPUMemoryAllocatorZone**)
                eastl::stack<GPUMemoryAllocatorZone*, eastl::fixed_vector<GPUMemoryAllocatorZone*, 256ul>>::top();
        } else {
            ppGVar2 = &m_pRootZone;
        }
        return *ppGVar2;
    }

    // 0x100c29c70
    GPUMemoryAllocatorZoneMonitor::~GPUMemoryAllocatorZoneMonitor() {
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      20, nullptr);
        }
        PopZone();
        long lVar2 = HeapBeginPtr();
        long lVar3 = end();
        while (true) {
            if (lVar2 == lVar3) {
                field_57536.~fixed_vector();
                field_40.~fixed_map();
                return;
            }
            cVar1 = ((lVar2 + 8))->empty();
            if (!cVar1)
                break;
            lVar2 = lVar2 + 2096;
        }
        LogAssert("zoneStack.second.empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                  "GPUMemoryAllocatorZoneMonitor.cpp",
                  25, "Other zones still exist");
    }

    // 0x100c29d80
    void GPUMemoryAllocatorZoneMonitor::PopZone() {
        if (((stack<math::Rect<int>, eastl::vector<math::Rect<int>>>*)GetZoneStack())->empty() != '\0') {
            LogAssert("!zoneStack.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/debug/"
                      "GPUMemoryAllocatorZoneMonitor.cpp",
                      80, nullptr);
        }
        eastl::stack<GPUMemoryAllocatorZone*, eastl::fixed_vector<GPUMemoryAllocatorZone*, 256ul>>::pop();
    }

    // 0x100c29e20
    GPUMemoryAllocatorZone* GPUMemoryAllocatorZoneMonitor::CreateZone(GPUMemoryAllocatorZone* gpuMemoryAllocatorZone,
                                                                      const char* str) {
        GPUMemoryAllocatorZone* this_00;
        uint64_t* puVar2;
        long lVar3;
        uint8_t local_e600[16];
        ReturnValue local_e5f0;
        GPUMemoryAllocatorZone local_e5e8;

        local_e5e8._0_8_ = eastl::hash<char const*>::operator()((hash<char const*>*)&local_e5f0, str);
        local_e600 = eastl::make_pair<void*&, void (*&)(void*)>(gpuMemoryAllocatorZone, &local_e5e8);
        local_e5f0 = field_40.find(*local_e600);
        local_e5e8.end();
        if (local_e5f0 == local_e5e8 == '\0') {
            lVar3 = *local_e5f0;
            this_00 = *(GPUMemoryAllocatorZone**)(lVar3 + 16);
        } else {
            local_e5e8 = GPUMemoryAllocatorZone(str);
            field_57536.push_back(local_e5e8);
            this_00 = (GPUMemoryAllocatorZone*)field_57536.back();
            this_00->SetParent(local_e600._0_8_);
            puVar2 = &field_40[*local_e600];
            *puVar2 = this_00;
        }
        return this_00;
    }

    // 0x100c54e70
    void GPUMemoryAllocatorZoneMonitor::PushZone(char const*)::$_104::operator()(
        GPUMemoryAllocatorZone* gpuMemoryAllocatorZone) const {
        auto str1 = gpuMemoryAllocatorZone->SSOBeginPtr();
        basic_string<char, eastl::fixed_vector_allocator<1ul, _512ul, _1ul, _0ul, true> _>* str2 =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, _512ul, _1ul, _0ul, true> _>*)((Layout*)**(
                                                                                                      uint64_t**)this)
                ->SSOBeginPtr();
        *str1 == *str2;
    }

} // namespace jag::render
