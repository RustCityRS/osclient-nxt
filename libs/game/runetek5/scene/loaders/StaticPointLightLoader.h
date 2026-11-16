// libs/game/runetek5/scene/loaders/StaticPointLightLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class StaticPointLightLoader {
    public:
        void GetPointLightList();
        unsigned int Load(Js5ResourceProvider* js5ResourceProvider, const HeightMap& heightMap);
        uint8_t* LoadMapSquarePointLightList(eastl::vector<shared_ptr<StaticPointLight>>& staticPointLights,
                                             Js5ResourceProvider* js5ResourceProvider, unsigned int arg3,
                                             unsigned int arg4);
        void Destroy();
        StaticPointLightLoader(unsigned int arg1, unsigned int arg2,
                               const shared_ptr<ClientCompositeData>& clientCompositeData);
        ~StaticPointLightLoader();

    private:
        unsigned int field_0;
        unsigned int field_4;
        shared_ptr field_8;
        uint8_t _unknown_24[32];
    };

    // 0x10041d460
    StaticPointLightLoader::StaticPointLightLoader(unsigned int arg1, unsigned int arg2,
                                                   const shared_ptr<ClientCompositeData>& clientCompositeData)
        : field_0(arg1), field_4(arg2), field_8(clientCompositeData) {}

    // 0x10041d580
    StaticPointLightLoader::~StaticPointLightLoader() {
        Destroy();
        field_48.~Array();
        field_24.~vector();
        field_8->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    // 0x100417610
    shared_ptr_if_not_array<graphics::PointLightGridTextureData>::type
    make_shared<graphics::PointLightGridTextureData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        PointLightGridTextureData* local_28[2];

        auto arg1 = aligned_alloc(131096, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::PointLightGridTextureData>::type result;
        } else {
            local_28[0] = placement_new<graphics::PointLightGridTextureData>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<graphics::PointLightGridTextureData>, int,
                              graphics::PointLightGridTextureData*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
