// Copyright (c) 2014
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef _CONTROLS_H
#define _CONTROLS_H

#include <boost/assign/list_of.hpp> // for 'map_list_of()'

// Set to true if we are mining the genesis block
#define INIT_MODE 	false


/** Official genesis settings **/
static const uint256 hashGenesisBlockOfficial("0x1e7f66e11bfd56faf5eb47a68aaeb6bb35a1cd0d3baa15cfa379b2760472ddca");
static const uint32_t genesisNonceOfficial = 2085272652;
static std::map<int, uint256> officialCheckpoints = 
        boost::assign::map_list_of
        (   0, hashGenesisBlockOfficial)
        ;



/** Test genesis settings **/
static const uint256 hashGenesisBlockTest("0x6c62fab347c1461fa44736cde2ecf6d115774dd90c273c7fc227f84f8496085c");
static const uint32_t genesisNonceTest = 385795638;
static std::map<int, uint256> testCheckpoints = 
        boost::assign::map_list_of
        (   0, hashGenesisBlockTest)
        ;


/* Hash Merkle Root */
static const uint256 hashMerkleRootOfficial("0x3a4b745e36f20d3cb2e7bcbb23388712c706219357be7bbc3b1ce9f66fca7ce9");

#endif