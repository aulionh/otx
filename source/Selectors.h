/*
	Selectors.h

	A list of selectors that are known to return an id of the same class that
	sent the message, or return nothing. 'crc' is the crc32 of each string.
	The list is sorted to allow binary searching.

	This file is in the public domain.
*/

typedef struct
{
	UInt32		crc;
	UInt32		length;
	const char*	string;
}
CheckedString;

#define NUM_FRIENDLY_SELS	102

static const CheckedString	gFriendlySels[] =
{
	{0x02a5b8e7,  28, "dictionaryWithObject:forKey:"},
	{0x0491f842,  45, "initWithCharactersNoCopy:length:freeWhenDone:"},
	{0x0563b86f,  22, "initWithData:encoding:"},
	{0x067679de,  36, "dictionaryWithObjects:forKeys:count:"},
	{0x07a8e097,  15, "arrayWithArray:"},
	{0x08c572ce,  21, "initWithBytes:length:"},
	{0x0b8604cc,  41, "initWithContentsOfURL:usedEncoding:error:"},
	{0x140da9fa,  29, "initWithContentsOfMappedFile:"},
	{0x1587ff39,   6, "retain"},
	{0x15d11f95,  14, "URLWithString:"},
	{0x1643cdf8,  37, "initWithContentsOfFile:options:error:"},
	{0x1e035eb1,  30, "initWithBytes:length:encoding:"},
	{0x1efada87,  14, "valueWithSize:"},
	{0x1fa0e526,  10, "dictionary"},
	{0x24425680,  13, "defaultCenter"},
	{0x2835dceb,  16, "initWithObjects:"},
	{0x2962f760,  14, "valueWithRect:"},
	{0x2bfbf0f5,  14, "defaultManager"},
	{0x2f447d80,  36, "dataWithContentsOfURL:options:error:"},
	{0x303ca78e,  17, "arrayWithObjects:"},
	{0x30aa27e5,  14, "initWithArray:"},
	{0x318e5a16,  15, "initWithString:"},
	{0x31d174b7,  30, "initWithObjects:forKeys:count:"},
	{0x32bb1a76,  21, "dataWithBytes:length:"},
	{0x384a2b14,  32, "initWithFormat:locale:arguments:"},
	{0x3c685b15,  40, "stringWithContentsOfFile:encoding:error:"},
	{0x40d8bf8d,  19, "initWithUTF8String:"},
	{0x4d124a65,  11, "autorelease"},
	{0x4d573d17,  37, "initWithContentsOfURL:encoding:error:"},
	{0x4e1b2873,  15, "valueWithPoint:"},
	{0x50a89cab,  27, "valueWithNonretainedObject:"},
	{0x50dffc6f,  27, "dataWithBytesNoCopy:length:"},
	{0x51d2b7cd,  20, "mutableCopyWithZone:"},
	{0x52d254df,  18, "arrayWithCapacity:"},
	{0x5343b8c9,  17, "stringWithFormat:"},
	{0x5713eb7e,  25, "initWithFormat:arguments:"},
	{0x584e4fcd,  29, "initWithDictionary:copyItems:"},
	{0x59d01e08,  37, "dataWithContentsOfFile:options:error:"},
	{0x5c231059,  38, "initWithContentsOfFile:encoding:error:"},
	{0x6081a31e,  22, "initWithFormat:locale:"},
	{0x613b6271,  42, "initWithContentsOfFile:usedEncoding:error:"},
	{0x6365df23,  36, "initWithContentsOfURL:options:error:"},
	{0x64939495,   5, "alloc"},
	{0x6ae4359f,  24, "valueWithBytes:objCType:"},
	{0x6f12c873,  17, "initWithCapacity:"},
	{0x70fe1cb9,  26, "initWithCharacters:length:"},
	{0x71a6676a,  13, "initWithData:"},
	{0x73feaafc,  29, "dataWithContentsOfMappedFile:"},
	{0x749dac89,  14, "initWithCoder:"},
	{0x757d6edf,  20, "initFileURLWithPath:"},
	{0x761a89dd,  22, "initWithObjects:count:"},
	{0x7b7ef7bd,  23, "initWithBytes:objCType:"},
	{0x7d3c173f,  15, "valueWithRange:"},
	{0x7fb971ec,  22, "initWithContentsOfURL:"},
	{0x80857ede,  43, "stringWithContentsOfURL:usedEncoding:error:"},
	{0x81569e7c,  29, "initWithString:relativeToURL:"},
	{0x81795b3f,  24, "initWithArray:copyItems:"},
	{0x85c154fe,  26, "localizedStringWithFormat:"},
	{0x88a88adf,  15, "initWithFormat:"},
	{0x8932eec7,  16, "arrayWithObject:"},
	{0x8d5ad9db,  30, "dictionaryWithObjects:forKeys:"},
	{0x92091043,  44, "stringWithContentsOfFile:usedEncoding:error:"},
	{0x981f37d5,  24, "arrayWithContentsOfFile:"},
	{0x9e47031d,   7, "release"},
	{0x9e5dbc90,  40, "dataWithBytesNoCopy:length:freeWhenDone:"},
	{0x9ebeb2a9,   6, "string"},
	{0x9f1c97a5,  28, "dictionaryWithContentsOfURL:"},
	{0xa10ceeb7,   5, "array"},
	{0xa1116d38,  16, "fileURLWithPath:"},
	{0xa64c4fd5,  28, "URLWithString:relativeToURL:"},
	{0xa8292a4b,  25, "initWithCString:encoding:"},
	{0xaa3dce99,  13, "initWithUser:"},
	{0xace8b651,  20, "standardUserDefaults"},
	{0xad18e612,  27, "initWithBytesNoCopy:length:"},
	{0xadf3f363,   4, "data"},
	{0xb692a488,  39, "stringWithContentsOfURL:encoding:error:"},
	{0xb729e846,  29, "dictionaryWithContentsOfFile:"},
	{0xb8c9b494,  23, "initWithContentsOfFile:"},
	{0xb93fe8b8,  25, "initWithScheme:host:path:"},
	{0xb9af3548,  28, "stringWithCharacters:length:"},
	{0xba39343a,  22, "dataWithContentsOfURL:"},
	{0xbacb81af,  13, "copyWithZone:"},
	{0xbecea74b,  21, "stringWithUTF8String:"},
	{0xc02282a3,  19, "initWithDictionary:"},
	{0xc674e474,   4, "init"},
	{0xc6bf8399,  23, "arrayWithContentsOfURL:"},
	{0xc8833ab5,  28, "sharedUserDefaultsController"},
	{0xcc9b7560,  17, "valueWithPointer:"},
	{0xcf1c7ba8,  23, "arrayWithObjects:count:"},
	{0xd37e41fb,  25, "dictionaryWithDictionary:"},
	{0xd7bc4330,  23, "dataWithContentsOfFile:"},
	{0xe081ca9a,  25, "resetStandardUserDefaults"},
	{0xe0fb5b05,  13, "dataWithData:"},
	{0xe5888a7f,  24, "initWithObjects:forKeys:"},
	{0xe692c838,  19, "value:withObjCType:"},
	{0xe88a9b2d,  40, "initWithBytesNoCopy:length:freeWhenDone:"},
	{0xe9f48059,  31, "initWithDefaults:initialValues:"},
	{0xea656800,  17, "stringWithString:"},
	{0xf439bd5f,  49, "initWithBytesNoCopy:length:encoding:freeWhenDone:"},
	{0xf5205d38,  27, "stringWithCString:encoding:"},
	{0xf64378e3,  23, "initWithObjectsAndKeys:"},
	{0xf9a32431,  29, "dictionaryWithObjectsAndKeys:"}
};
