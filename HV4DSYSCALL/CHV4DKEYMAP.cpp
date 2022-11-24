#include "pch.h"

#include "CHV4DKEYMAP.h"

using namespace winrt;

using namespace winrt::HV4D;

namespace winrt::HV4DSYSCALL
{
	const std::unordered_map<char, uint32_t> tagHV4DKeyMapA = {
		{'a',  0}, {'b',  1}, {'c',  2}, {'d',  3},
		{'e',  4}, {'f',  5}, {'g',  6}, {'h',  7},
		{'i',  8}, {'j',  9}, {'k', 10}, {'l', 11},
		{'m', 12}, {'n', 13}, {'o', 14}, {'p', 15},
		{'q', 16}, {'r', 17}, {'s', 18}, {'t', 19},
		{'u', 20}, {'v', 21}, {'w', 22}, {'x', 23},
		{'y', 24}, {'z', 25}, {'A', 26}, {'B', 27},
		{'C', 28}, {'D', 29}, {'E', 30}, {'F', 31},
		{'G', 32}, {'H', 33}, {'I', 34}, {'J', 35},
		{'K', 36}, {'L', 37}, {'M', 38}, {'N', 39},
		{'O', 40}, {'P', 41}, {'Q', 42}, {'R', 43},
		{'S', 44}, {'T', 45}, {'U', 46}, {'V', 47},
		{'W', 48}, {'X', 49}, {'Y', 50}, {'Z', 51},
		{'0', 52}, {'1', 53}, {'2', 54}, {'3', 55},
		{'4', 56}, {'5', 57}, {'6', 58}, {'7', 59},
		{'8', 60}, {'9', 61}, {'!', 62}, {'@', 63},
		{'#', 64}, {'$', 65}, {'^', 66}, {'&', 67},
		{'*', 68}, {'+', 69}, {'-', 70} };

	const std::unordered_map<char, uint32_t>* HV4DKeyMapA()
	{
		return &tagHV4DKeyMapA;

	}

	const std::unordered_map<wchar_t, uint32_t> tagHV4DKeyMapW = {
		{'a',  0}, {'b',  1}, {'c',  2}, {'d',  3},
		{'e',  4}, {'f',  5}, {'g',  6}, {'h',  7},
		{'i',  8}, {'j',  9}, {'k', 10}, {'l', 11},
		{'m', 12}, {'n', 13}, {'o', 14}, {'p', 15},
		{'q', 16}, {'r', 17}, {'s', 18}, {'t', 19},
		{'u', 20}, {'v', 21}, {'w', 22}, {'x', 23},
		{'y', 24}, {'z', 25}, {'A', 26}, {'B', 27},
		{'C', 28}, {'D', 29}, {'E', 30}, {'F', 31},
		{'G', 32}, {'H', 33}, {'I', 34}, {'J', 35},
		{'K', 36}, {'L', 37}, {'M', 38}, {'N', 39},
		{'O', 40}, {'P', 41}, {'Q', 42}, {'R', 43},
		{'S', 44}, {'T', 45}, {'U', 46}, {'V', 47},
		{'W', 48}, {'X', 49}, {'Y', 50}, {'Z', 51},
		{'0', 52}, {'1', 53}, {'2', 54}, {'3', 55},
		{'4', 56}, {'5', 57}, {'6', 58}, {'7', 59},
		{'8', 60}, {'9', 61}, {'!', 62}, {'@', 63},
		{'#', 64}, {'$', 65}, {'^', 66}, {'&', 67},
		{'*', 68}, {'+', 69}, {'-', 70} };

	const std::unordered_map<wchar_t, uint32_t>* HV4DKeyMapW()
	{
		return &tagHV4DKeyMapW;

	}

	const std::unordered_map<uint32_t, char> tagHV4DKeyIndexA = {
		{ 0, 'a'}, { 1, 'b'}, { 2, 'c'}, { 3, 'd'},
		{ 4, 'e'}, { 5, 'f'}, { 6, 'g'}, { 7, 'h'},
		{ 8, 'i'}, { 9, 'j'}, {10, 'k'}, {11, 'l'},
		{12, 'm'}, {13, 'n'}, {14, 'o'}, {15, 'p'},
		{16, 'q'}, {17, 'r'}, {18, 's'}, {19, 't'},
		{20, 'u'}, {21, 'v'}, {22, 'w'}, {23, 'x'},
		{24, 'y'}, {25, 'z'}, {26, 'A'}, {27, 'B'},
		{28, 'C'}, {29, 'D'}, {30, 'E'}, {31, 'F'},
		{32, 'G'}, {33, 'H'}, {34, 'I'}, {35, 'J'},
		{36, 'K'}, {37, 'L'}, {38, 'M'}, {39, 'N'},
		{40, 'O'}, {41, 'P'}, {42, 'Q'}, {43, 'R'},
		{44, 'S'}, {45, 'T'}, {46, 'U'}, {47, 'V'},
		{48, 'W'}, {49, 'X'}, {50, 'Y'}, {51, 'Z'},
		{52, '0'}, {53, '1'}, {54, '2'}, {55, '3'},
		{56, '4'}, {57, '5'}, {58, '6'}, {59, '7'},
		{60, '8'}, {61, '9'}, {62, '!'}, {63, '@'},
		{64, '#'}, {65, '$'}, {66, '^'}, {67, '&'},
		{68, '*'}, {69, '+'}, {70, '-'} };

	const std::unordered_map<uint32_t, char>* HV4DKeyIndexA()
	{
		return &tagHV4DKeyIndexA;

	}

	const std::unordered_map<uint32_t, wchar_t> tagHV4DKeyIndexW = {
		{ 0, 'a'}, { 1, 'b'}, { 2, 'c'}, { 3, 'd'},
		{ 4, 'e'}, { 5, 'f'}, { 6, 'g'}, { 7, 'h'},
		{ 8, 'i'}, { 9, 'j'}, {10, 'k'}, {11, 'l'},
		{12, 'm'}, {13, 'n'}, {14, 'o'}, {15, 'p'},
		{16, 'q'}, {17, 'r'}, {18, 's'}, {19, 't'},
		{20, 'u'}, {21, 'v'}, {22, 'w'}, {23, 'x'},
		{24, 'y'}, {25, 'z'}, {26, 'A'}, {27, 'B'},
		{28, 'C'}, {29, 'D'}, {30, 'E'}, {31, 'F'},
		{32, 'G'}, {33, 'H'}, {34, 'I'}, {35, 'J'},
		{36, 'K'}, {37, 'L'}, {38, 'M'}, {39, 'N'},
		{40, 'O'}, {41, 'P'}, {42, 'Q'}, {43, 'R'},
		{44, 'S'}, {45, 'T'}, {46, 'U'}, {47, 'V'},
		{48, 'W'}, {49, 'X'}, {50, 'Y'}, {51, 'Z'},
		{52, '0'}, {53, '1'}, {54, '2'}, {55, '3'},
		{56, '4'}, {57, '5'}, {58, '6'}, {59, '7'},
		{60, '8'}, {61, '9'}, {62, '!'}, {63, '@'},
		{64, '#'}, {65, '$'}, {66, '^'}, {67, '&'},
		{68, '*'}, {69, '+'}, {70, '-'} };

	const std::unordered_map<uint32_t, wchar_t>* HV4DKeyIndexW()
	{
		return &tagHV4DKeyIndexW;

	}

	const std::vector<char> tagHV4DHexA{ '0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f' };

	const std::vector<char>* HV4DHexA() {

		return &tagHV4DHexA;

	}

	const std::vector<wchar_t> tagHV4DHexW{ '0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f' };

	const std::vector<wchar_t>* HV4DHexW() {

		return &tagHV4DHexW;

	}

	const std::unordered_map<std::byte, hstring>tagHV4DHexByteToHstring{
		{ std::byte{0b00000000}  ,L"00" }, 
		{ std::byte{0b00000001}  ,L"01" }, { std::byte{0b00010000}, L"10" },
		{ std::byte{0b00000010}  ,L"02" }, { std::byte{0b00100000}, L"20" },
		{ std::byte{0b00000011}  ,L"03" }, { std::byte{0b00110000}, L"30" },
		{ std::byte{0b00000100}  ,L"04" }, { std::byte{0b01000000}, L"40" },
		{ std::byte{0b00000101}  ,L"05" }, { std::byte{0b01010000}, L"50" },
		{ std::byte{0b00000110}  ,L"06" }, { std::byte{0b01100000}, L"60" },
		{ std::byte{0b00000111}  ,L"07" }, { std::byte{0b01110000}, L"70" },
		{ std::byte{0b00001000}  ,L"08" }, { std::byte{0b10000000}, L"80" },
		{ std::byte{0b00001001}  ,L"09" }, { std::byte{0b10010000}, L"90" },
		{ std::byte{0b00001010}  ,L"0A" }, { std::byte{0b10100000}, L"A0" },
		{ std::byte{0b00001011}  ,L"0B" }, { std::byte{0b10110000}, L"B0" },
		{ std::byte{0b00001100}  ,L"0C" }, { std::byte{0b11000000}, L"C0" },
		{ std::byte{0b00001101}  ,L"0D" }, { std::byte{0b11010000}, L"D0" },
		{ std::byte{0b00001110}  ,L"0E" }, { std::byte{0b11100000}, L"E0" },
		{ std::byte{0b00001111}  ,L"0F" }, { std::byte{0b11110000}, L"F0" },
		{ std::byte{0b00001010}  ,L"0a" }, { std::byte{0b10100000}, L"a0" },
		{ std::byte{0b00001011}  ,L"0b" }, { std::byte{0b10110000}, L"b0" },
		{ std::byte{0b00001100}  ,L"0c" }, { std::byte{0b11000000}, L"c0" },
		{ std::byte{0b00001101}  ,L"0d" }, { std::byte{0b11010000}, L"d0" },
		{ std::byte{0b00001110}  ,L"0e" }, { std::byte{0b11100000}, L"e0" },
		{ std::byte{0b00001111}  ,L"0f" }, { std::byte{0b11110000}, L"f0" } };

	const std::unordered_map<std::byte, hstring>* HV4DHexByteToHstring() {

		return &tagHV4DHexByteToHstring;

	}

	const std::unordered_map<hstring, std::byte>tagHV4DHexHstringToByte{
		{ L"00"  ,std::byte{0b00000000} }, 
		{ L"01"  ,std::byte{0b00000001} }, { L"10"  ,std::byte{0b00010000} },
		{ L"02"  ,std::byte{0b00000010} }, { L"20"  ,std::byte{0b00100000} },
		{ L"03"  ,std::byte{0b00000011} }, { L"30"  ,std::byte{0b00110000} },
		{ L"04"  ,std::byte{0b00000100} }, { L"40"  ,std::byte{0b01000000} },
		{ L"05"  ,std::byte{0b00000101} }, { L"50"  ,std::byte{0b01010000} },
		{ L"06"  ,std::byte{0b00000110} }, { L"60"  ,std::byte{0b01100000} },
		{ L"07"  ,std::byte{0b00000111} }, { L"70"  ,std::byte{0b01110000} },
		{ L"08"  ,std::byte{0b00001000} }, { L"80"  ,std::byte{0b10000000} },
		{ L"09"  ,std::byte{0b00001001} }, { L"90"  ,std::byte{0b10010000} },
		{ L"0A"  ,std::byte{0b00001010} }, { L"A0"  ,std::byte{0b10100000} },
		{ L"0B"  ,std::byte{0b00001011} }, { L"B0"  ,std::byte{0b10110000} },
		{ L"0C"  ,std::byte{0b00001100} }, { L"C0"  ,std::byte{0b11000000} },
		{ L"0D"  ,std::byte{0b00001101} }, { L"D0"  ,std::byte{0b11010000} },
		{ L"0E"  ,std::byte{0b00001110} }, { L"E0"  ,std::byte{0b11100000} },
		{ L"0F"  ,std::byte{0b00001111} }, { L"F0"  ,std::byte{0b11110000} },
		{ L"0a"  ,std::byte{0b00001010} }, { L"a0"  ,std::byte{0b10100000} },
		{ L"0b"  ,std::byte{0b00001011} }, { L"b0"  ,std::byte{0b10110000} },
		{ L"0c"  ,std::byte{0b00001100} }, { L"c0"  ,std::byte{0b11000000} },
		{ L"0d"  ,std::byte{0b00001101} }, { L"d0"  ,std::byte{0b11010000} },
		{ L"0e"  ,std::byte{0b00001110} }, { L"e0"  ,std::byte{0b11100000} },
		{ L"0f"  ,std::byte{0b00001111} }, { L"f0"  ,std::byte{0b11110000} } };

	const std::unordered_map<hstring, std::byte>* HV4DHexHstringToByte() {

		return &tagHV4DHexHstringToByte;

	}

	const std::vector<char>tagHV4DNumericA{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
		'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F' };

	const std::vector<char>* HV4DNumericA()
	{
		return &tagHV4DNumericA;

	}

	const std::vector<wchar_t>tagHV4DNumericW{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
		'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F' };

	const std::vector<wchar_t>* HV4DNumericW()
	{
		return &tagHV4DNumericW;

	}

	const std::vector<char>tagHV4DAlphaNumericA{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	const std::vector<char>* HV4DAlphaNumericA()
	{
		return &tagHV4DAlphaNumericA;

	}

	const std::vector<wchar_t>tagHV4DAlphaNumericW{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	const std::vector<wchar_t>* HV4DAlphaNumericW()
	{
		return &tagHV4DAlphaNumericW;

	}

	const std::vector<char>tagHV4DSymbolA{ '!', '@', '#', '$', '%', '^', '&', '*', '+', '=', '|', '?',
		',', '/', ':', ';', '"', '\u0027' };

	const std::vector<char>* HV4DSymbolA()
	{
		return &tagHV4DSymbolA;

	}

	const std::vector<wchar_t>tagHV4DSymbolW{ '!', '@', '#', '$', '%', '^', '&', '*', '+', '=', '|', '?',
		',', '/', ':', ';', '"', '\u0027' };

	const std::vector<wchar_t>* HV4DSymbolW()
	{
		return &tagHV4DSymbolW;

	}

}