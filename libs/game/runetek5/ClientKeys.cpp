// libs/game/runetek5/ClientKeys.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag {
    // 0x1039bc168, set at startup by ___cxx_global_var_init
    math::BigInteger ClientKeys::login_rsae = BigInteger("10001", 16);

    // 0x1039bc170, set at startup by ___cxx_global_var_init.1
    math::BigInteger ClientKeys::login_rsan =
        BigInteger("88d13c2f89f1385d8bd7e32b04839e0f9381ed5be297a9212edd9a77179c28f2bb450ba8240efb9006f819bf16de6619b57"
                   "5321acfaf1a4a2a6a89bc5966a99720c9445661fdb97211b3b2eacbe05bc2650408aed30cf8ae328705513ea08f5c467000"
                   "038f96776680a8310e68177db4830660ce43ea3794c8cc9678209fb501",
                   16);

    // 0x1039bc178, set at startup by ___cxx_global_var_init.3
    math::BigInteger ClientKeys::js5_rsae = BigInteger("10001", 16);

    // 0x1039bc180, set at startup by ___cxx_global_var_init.4
    math::BigInteger ClientKeys::js5_rsan = BigInteger(
        "ab13ca43187e6a1a762d1fafae5a1365935783021057868bfbbb420f885d8aa3b64b43da08a33278100d30f8d25098f5b9ae98ef223326"
        "c0117ac3350f24eae2b79a92ebb03eecc4b8dcc88c4352e5bb872064a9d4fae7978b295a73929cb87ec909afd1b04403557bb8ac57dc25"
        "c2662eec8ec35ad294264d41cc76e961d1049cb817bace13ff8e29f62f072891a7f29c0b46eba4e51c280122198d4ce7eafb1168bcebf1"
        "2139ef68f5bc9cd2232a19dcb6c0043b79c30be2f14235c449e6eebc1ba4cd1f9b30a9548aa562a900b4b0bc1493a83e4abee766e01273"
        "066a318e4342f7ffe010f02c4340b32c584ef0168a81324aba76a5cc562a7fc7b81abcbf25cc083372cf47e786e03f7adc0ac2d3b161d6"
        "fc7faa1e3c75ddd545c35215dd0bd993fa97dccc57e66bfe8749cb11b2668d65785eedd77c2c9bcb8a90dbfe08fdbfe9f1a60e79f6fcc0"
        "cbdf8c00afc5c4d4dad69aabc52728b95d80a2d4f5565405928e37e21b20f78f33deb0f98caae8fc4503ecf6fd084d34545996f76d7135"
        "30ff6e3550fedb9a9db191f05312172a07f2274e87b2253afe03df4e7cfd448c70b5775a15bcf73ab83724cc1014f7b7b77f51249d30eb"
        "50c166f6bf40e4921ceec8cab704d917d3c17e3d3952e12a0e7699dd961a744c64eee2da0b647df8aa0ac1e72dedbf514cb8914c7d2e36"
        "ecd0f1ff1fd5c11cb92ebae9ee360abf7f",
        16);

    // 0x1039bc188, set at startup by ___cxx_global_var_init.6
    math::BigInteger ClientKeys::protocolHash_rsae = BigInteger("10001", 16);

    // 0x1039bc190, set at startup by ___cxx_global_var_init.7
    math::BigInteger ClientKeys::protocolHash_rsan =
        BigInteger("e0e8451756d6cd575cdcd46a93fb4734481b88ba166ada225af15cc8dadc98948f030623670ecead5ea4f1dbda6015c3573"
                   "a00f732ff1b2770504a08b53788cb",
                   16);

    // 0x1039bc198, set at startup by ___cxx_global_var_init.9
    math::BigInteger ClientKeys::accountAppeal_rsae =
        BigInteger("80782894952180643741752986186714059433953886149239752893425047584684715842049", 10);

    // 0x1039bc1a0, set at startup by ___cxx_global_var_init.11
    math::BigInteger ClientKeys::accountAppeal_rsan =
        BigInteger("723730011730566748870718386172805276635816665505213772743979519125334012795507549963557510490152344"
                   "6809299097934591732635674173519120047404024393881551683",
                   10);

} // namespace jag
