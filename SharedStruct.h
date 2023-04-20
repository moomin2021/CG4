#pragma once
#include <d3dx12.h>
#include <DirectXMath.h>
#include <wrl.h>
using namespace Microsoft::WRL;
#include <vector>

struct Vertex
{
    DirectX::XMFLOAT3 Position; // �ʒu���W
    DirectX::XMFLOAT3 Normal; // �@��
    DirectX::XMFLOAT2 UV; // uv���W
    DirectX::XMFLOAT3 Tangent; // �ڋ��
    DirectX::XMFLOAT4 Color; // ���_�F
};

struct Mesh
{
    std::vector<Vertex> Vertices; // ���_�f�[�^�̔z��
    std::vector<uint32_t> Indices; // �C���f�b�N�X�̔z��
    std::wstring DiffuseMap; // �e�N�X�`���̃t�@�C���p�X
};