#pragma once
/*
* Copyright 2016 Huy Cuong Nguyen
* Copyright 2016 ZXing authors
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include <string>

namespace ZXing {

class BitMatrix;
enum class CharacterSet;

namespace QRCode {

enum class ErrorCorrectionLevel;

/**
* This object renders a QR Code as a BitMatrix 2D array of greyscale values.
*
* @author dswitkin@google.com (Daniel Switkin)
*/
class Writer
{
public:
	Writer();

	Writer& setMargin(int margin);
	Writer& setErrorCorrectionLevel(ErrorCorrectionLevel ecLevel);
	Writer& setEncoding(CharacterSet encoding);
	Writer& setVersion(int versioNumber);

	void encode(const std::wstring& contents, int width, int height, BitMatrix& output) const;

private:
	int _margin;
	ErrorCorrectionLevel _ecLevel;
	CharacterSet _encoding;
	int _version;
};

} // QRCode
} // ZXing
