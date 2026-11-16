// libs/ui/components/ComponentContainer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "ComponentContainer.h"

namespace jag::ui {
    // 0x100009d50: ComponentContainer::GetComponent() const has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100023af0: ComponentContainer::GetHidden() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x100023b60: ComponentContainer::SetHiddenUnsafe(bool) has the same machine code as hal::Haptics::SetEnabled(bool)

    // 0x10011c9a0: ComponentContainer::~ComponentContainer() has the same machine code as oldscape::dash3d::ModelAppender::~ModelAppender()

    // 0x10012a760: ComponentContainer::~ComponentContainer() has the same machine code as eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric>>::~pair()

    // 0x1002034d0: ComponentContainer::get() const has the same machine code as SharedArray<unsigned int>::data()

    // 0x1002034d0: ComponentContainer::operator->() const has the same machine code as SharedArray<unsigned int>::data()

    // 0x100694f60
    void ComponentUtils::SetHiddenInStaticList(int arg1, eastl::vector<ComponentContainer>& componentContainers,
                                               bool arg3) {
        auto sharedArray = componentContainers.HeapBeginPtr();
        auto pSVar3 = componentContainers.end();
        while (true) {
            if (sharedArray == pSVar3) {
                if (componentContainers.empty() == '\0') {
                    LogAssert("componentList.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentContainer.cpp",
                              15, nullptr);
                }
                return;
            }
            if (((Component*)sharedArray->data())->GetStaticID() == arg1)
                break;
            sharedArray = sharedArray + 24;
        }
        new (sharedArray) std::__cxx_atomic_base_impl(arg3);
    }

    // 0x100695010
    void ComponentUtils::SetHiddenInDynamicList(int arg1, eastl::vector<ComponentContainer>& componentContainers,
                                                bool arg3) {
        auto sharedArray = componentContainers.HeapBeginPtr();
        auto pSVar3 = componentContainers.end();
        while (true) {
            if (sharedArray == pSVar3) {
                if (componentContainers.empty() == '\0') {
                    LogAssert("componentList.empty()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                              "ComponentContainer.cpp",
                              28, nullptr);
                }
                return;
            }
            if (((Component*)sharedArray->data())->GetDynamicID() == arg1)
                break;
            sharedArray = sharedArray + 24;
        }
        new (sharedArray) std::__cxx_atomic_base_impl(arg3);
    }

    // 0x100696d40
    unsigned long ComponentUtils::GetHiddenInDynamicList(int arg1,
                                                         const eastl::vector<ComponentContainer>& componentContainers) {
        bool cVar1;
        uint8_t local_31;

        auto skybox = componentContainers.HeapBeginPtr();
        auto pSVar3 = componentContainers.end();
        do {
            if (skybox == pSVar3) {
            LAB_100696db7:
                if (skybox == pSVar3) {
                    cVar1 = componentContainers.empty();
                    local_31 = 1;
                    if (!cVar1) {
                        LogAssert("componentList.empty()",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/components/"
                                  "ComponentContainer.cpp",
                                  40, nullptr);
                    }
                }
                return local_31 & 4294967041;
            }
            if (((Component*)skybox->data())->GetDynamicID() == arg1) {
                local_31 = skybox->ShowSkybox();
                goto LAB_100696db7;
            }
            skybox = (Skybox*)&skybox->field_24;
        } while (true);
    }

} // namespace jag::ui
