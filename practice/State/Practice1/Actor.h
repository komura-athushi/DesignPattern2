#pragma once
class Actor : public IGameObject
{
public:
	Actor(){}
	~Actor(){}
	bool Start();
	void Update();
	void Render(RenderContext& rc);
private:
	//アニメーション。
	enum EnAnimationClip {
		enAnimationClip_Idle,				//待機アニメーション。	
		enAnimationClip_Attack,				//攻撃アニメーション。
		enAnimationClip_Jump,				//ジャンプアニメーション。
		enAnimationClip_Num,				//アニメーションの数。
	};
	AnimationClip			m_animationClips[enAnimationClip_Num];		//アニメーションクリップ。
	ModelRender				m_modelRender;
	Vector3					m_position;
	CharacterController		m_charaCon;
	Vector3					m_velocity = Vector3::Zero;
	bool					m_isJump = false;
	bool					m_isAttack = false;
};

