///////////////////////////////////////////////////////////////////////////////
//
//	���ʃw�b�_
//
///////////////////////////////////////////////////////////////////////////////

// �R���o�[�^�̐ݒ�
// 0:false 1:true
#setting "NeedVariableDeclaration"		1		// �ϐ��錾���K�v��(default:false)
#setting "DefaultVariableType"			0		// �f�t�H���g�^ 0:int 1:uint 2:float 3:str 4:label (default:int)

#setting "NoHeader"						1		// �w�b�_���o�͂��Ȃ�(default:false)
#setting "ResumableSegment"				0		// �Z�O�����g�̍ĊJ���\��(default:true)
#setting "MixableCodeData"				0		// �Z�O�����g�ɃR�[�h�ƃf�[�^�����݂���̂�����(default:false)
#setting "DeleteEmptySegment"			1		// ��̃Z�O�����g���폜���邩(default:true)
#setting "MacroLoopMax"					2000	// �}�N�����[�v�̌J��Ԃ��񐔂̏��(default:2000)

///////////////////////////////////////////////////////////////////////////////


// ���߂̎��
enum
{
	COMMAND_END,		// �X�N���v�g�̏I���

	COMMAND_DEST_NAME,

	COMMAND_TEX_MATERIAL,
	COMMAND_TEX_AO,
	COMMAND_TEX_LIGHT,
	COMMAND_SET,

	COMMAND_AO_RATE,
	COMMAND_LIGHT_RATE,

	COMMAND_LIGHT_VALUE,
};



macro dest_name str filename
{
	Raw COMMAND_DEST_NAME, filename
}


macro tex_material str texname
{
	Raw COMMAND_TEX_MATERIAL, texname
}


macro tex_ao str texname
{
	Raw COMMAND_TEX_AO, texname
}


macro tex_light str texname
{
	Raw COMMAND_TEX_LIGHT, texname
}


macro set int palette, int r, int g, int b
{
	Raw COMMAND_SET, palette, r, g, b
}


// AO�}�b�v�̉e���x�i�����l:1�j
// rate : 0.0 �` 1.0
macro ao_rate float rate
{
	Raw COMMAND_AO_RATE, rate
}


// ���C�g�}�b�v�̉e���x�i�����l:1�j
// rate : 0.0 �`
macro light_rate float rate
{
	Raw COMMAND_LIGHT_RATE, rate
}


macro light_value float value
{
	Raw COMMAND_LIGHT_VALUE, value
}


// �t�b�^�i�X�N���v�g�̍Ō�Ɏ����I�ɌĂ΂��j
macro footer
{
	Raw COMMAND_END
}